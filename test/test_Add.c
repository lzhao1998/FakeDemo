#include "unity.h"
#include "mock_Add.h"
#include  <stdio.h>

int fake_add(int v1, int v2, int callNumber)
{
  printf("Hi :)\n");
  if(callNumber == 0)
    return 8;
  else if(callNumber == 1)
    return 21;
  
  return -1;
}

void setUp(void)
{
  add_StubWithCallback(fake_add);
}

void tearDown(void){}

void test_Add_given_2_6_expect_8(void) //order of the expect must be correct
{
  //add_ExpectAndReturn(2,6,8);
  //add_ExpectAndReturn(9,12,21);
  
  TEST_ASSERT_EQUAL(8,add(2,6));
  TEST_ASSERT_EQUAL(21,add(9,12));
}
