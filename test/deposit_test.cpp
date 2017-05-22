#include <iostream>

using namespace std;

#include "../thirdparty/ctest.h"
#include "../src/deposit.cpp"

CTEST(one, one_test)
{
    int a = 100;
    int b = 1;
    int expected = a*0.9 ;
    int result = one(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(two, two_test)
{
    int a = 100;
    int b = 2;
    int expected = a + a*0.03;
    int result = two(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(three, three_test)
{
    int a = 100;
    int b = 1;
    int expected = a + a*0.06;
    int result = three(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(four, four_test)
{
    int a = 100;
    int b = 2;
    int expected = a + a*0.15;
    int result = four(b,a);
    ASSERT_EQUAL(expected, result);
}
