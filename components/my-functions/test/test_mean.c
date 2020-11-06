#include <stdio.h>
#include "unity.h"
#include "my-functions.h"

#define countof(x) (sizeof(x)/sizeof(x[0]))

TEST_CASE("Empty array", "[double]")
{
    int16_t v[0];
    doubleArray(v, 0);
    TEST_ASSERT_EQUAL(0, v[0]);
}

TEST_CASE("Standard case", "[double]")
{
    int16_t original[] = {1, 3, 5, 7, 9};
    int16_t expected[] = {2, 6, 10, 14, 18};
    doubleArray(original, countof(original));

    for(int i = 0; i < countof(original); i++){
        if(original[i] != expected[i]){
            TEST_FAIL();
        }
    }
}

TEST_CASE("Negative numbers", "[double]")
{
    int16_t original[] = {-100, 3, 5, 7, 9};
    int16_t expected[] = {-200, 6, 10, 14, 18};
    doubleArray(original, countof(original));

    for(int i = 0; i < countof(original); i++){
        TEST_ASSERT_EQUAL(expected[i], original[i]);
    }
}
