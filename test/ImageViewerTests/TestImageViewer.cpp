#include <QString>
#include <QtTest>

#include "ArgumentParserDefault.h"
#include <iostream>

class TestImageViewer : public QObject
{
    Q_OBJECT
    
public:
    TestImageViewer();
    
private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testArgumentParser();
};

TestImageViewer::TestImageViewer()
{
}

void TestImageViewer::initTestCase()
{
}

void TestImageViewer::cleanupTestCase()
{
}

void TestImageViewer::testArgumentParser()
{
    char * args0[] = {"executable"};
    char * args1[] = {"executable", "-opt1"};
    char * args2[] = {"executable", "-arg", "value"};
    char * args3[] = {"executable", "-opt1", "-opt2"};
    char * args4[] = {"executable", "-opt", "-arg", "value"};

    ArgumentParserDefault parser;

    IArgumentParser::ArgumentMap argmap = parser.parse(1,args0);
    QCOMPARE((int)argmap.size(), 0);

    argmap = parser.parse(2,args1);
    QCOMPARE(argmap["opt1"], std::string(""));

    argmap = parser.parse(3,args2);
    QCOMPARE(argmap["arg"], std::string("value"));

    argmap = parser.parse(3,args3);
    QCOMPARE(argmap["opt1"], std::string(""));
    QCOMPARE(argmap["opt2"], std::string(""));

    argmap = parser.parse(4,args4);
    QCOMPARE(argmap["opt"], std::string(""));
    QCOMPARE(argmap["arg"], std::string("value"));


}

QTEST_APPLESS_MAIN(TestImageViewer)

#include "TestImageViewer.moc"
