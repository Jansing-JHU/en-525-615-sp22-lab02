#include "utilities.h"

void ex1(void)
{
    char test1[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char test2[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
    char *out;

    printf("Exercise 1 - Case 1\n");
    int size = sizeof test1 / sizeof test1[0];
    myPrettyPrint(test1, size);
    out = reverseArray(test1, size);
    myPrettyPrint(out, size);

    printf("Exercise 1 - Case 2\n");
    size = sizeof test2 / sizeof test2[0];
    myPrettyPrint(test2, size);
    out = reverseArray(test2, size);
    myPrettyPrint(out, size);
}
