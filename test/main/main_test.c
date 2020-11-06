#include <stdio.h>
#include <string.h>
#include "unity.h"


void app_main()
{
    printf("testing kojesta\n");
    UNITY_BEGIN();
    unity_run_test_by_name("Standard case");
    UNITY_END();

    printf("running by tag\n");
    UNITY_BEGIN();
    unity_run_tests_by_tag("[double]", false);
    UNITY_END();
}
