#include "utilities.h"

void ex5(void)
{
    uint16_t test1[] = {10, 2, 30, 40};
    int size = sizeof(test1) / sizeof(test1[0]);
    uint16_t *out;

    printf("Exercise 5 - Case 1\n");
    printSum(test1, size);
    out = sumBefore(test1, size);
    printSum(out, size);

    uint16_t test2[] = {100, 5, 300, 51, 81};
    size = sizeof(test2) / sizeof(test2[0]);
    printf("Exercise 5 - Case 2\n");
    printSum(test2, size);
    out = sumBefore(test2, size);
    printSum(out, size);
}