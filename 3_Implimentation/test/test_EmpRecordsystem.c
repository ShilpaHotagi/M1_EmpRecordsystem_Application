/**
 * @file test_EmpRecordsystem.c
 * @author Shilpa Hotagi
 * @brief 
 * @version 0.1
 * @date 2022-02-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <fun.h>

/* Modify these two lines according to the project */
#include <fun.h>
#define PROJECT_NAME    "EmpRecordsystem"

/* Prototypes for all the test functions */
void test_addrecord(void);
void test_deleterecord(void);
void test_searchrecord(void);
void test_displayrecord(void);
void test_modifyrecord(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addrecord);
  RUN_TEST(test_deleterecord);
  RUN_TEST(test_searchrecord);
  RUN_TEST(test_exit);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_addrecord(void) {
  TEST_ASSERT_EQUAL(Shilpa 22 45000, addrecord(Shilpa 22 45000));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(Shilpa 45000 22, addrecord(shilpa 22 40000));
}