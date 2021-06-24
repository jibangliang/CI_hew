#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/UnitTest/sample.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/UnitTest/sample.c");

EXTERN_C_LINKAGE void TestSuite_sample_c_cd981db_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_sample_c_cd981db_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_sample_c_cd981db);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_sample_c_cd981db_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_sample_c_cd981db_testSuiteTearDown);
CPPTEST_TEST_DS(TestSuite_sample_c_cd981db_test_case, CPPTEST_DS("test_case"));
CPPTEST_TEST_SUITE_END();
        

void TestSuite_sample_c_cd981db_test_case(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_sample_c_cd981db);

void TestSuite_sample_c_cd981db_testSuiteSetUp(void);
void TestSuite_sample_c_cd981db_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_sample_c_cd981db_testSuiteTearDown(void);
void TestSuite_sample_c_cd981db_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_sample_c_cd981db_setUp(void);
void TestSuite_sample_c_cd981db_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_sample_c_cd981db_tearDown(void);
void TestSuite_sample_c_cd981db_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_case */
/* CPPTEST_TEST_CASE_CONTEXT int sampleTest(int) */
void TestSuite_sample_c_cd981db_test_case()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="DataSourceStep" uid="0" version="2">
            <ext>true</ext>
            <extname>test_case</extname>
        </step>
        <step id="MultiVariableStep" uid="1" version="1">
            <step id="VariableStep" version="1">
                <name>_a</name>
                <type>int</type>
                <value>CPPTEST_DS_GET_INTEGER("V#I#_a")</value>
            </step>
            <step id="VariableStep" version="1">
                <name>_return</name>
                <type>int</type>
                <value/>
            </step>
        </step>
        <step id="CallStep" uid="2" version="1">
            <comment>Tested function call</comment>
            <return>_return</return>
            <name>sampleTest</name>
            <params>_a</params>
        </step>
        <step id="AssertionsStep" uid="3" version="1">
            <step id="AssertionStep" uid="3.0" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>CPPTEST_DS_GET_INTEGER("A#I#_return")</P1>
                <P2>_return</P2>
                <P3/>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
int _a = CPPTEST_DS_GET_INTEGER("V#I#_a");
int _return;
/* CPPTEST_TC_STEP_UID:2 */
_return = sampleTest(_a);
/* CPPTEST_TC_STEP_UID:3.0 */
CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("A#I#_return"), _return);
}
/* CPPTEST_TEST_CASE_END test_case */
