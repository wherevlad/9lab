#include <iostream>
#include <stdlib.h>

#include "../thirdparty/ctest.h"

CTEST(main1, main1_test)
{
    int expected1 = 0;
    int expected2 = 365;
    int result = rand() %365;
    ASSERT_INTERVAL(expected1,expected2,result);
}

CTEST(main2, main2_test)
{
    int expected1 = 10;
    int expected2 = 1000000;
    int result = rand() %100000;
    ASSERT_INTERVAL(expected1,expected2,result);
}
