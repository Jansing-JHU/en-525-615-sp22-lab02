#include "utilities.h"

void ex6(void)
{
    // Start, Stop, Multiple 1, Muliple 2
    // These are stored in a struct called `mults`
    mults m1 = {1, 100, 3, 5};
    mults m2 = {4, 127, 2, 3};
    mults m3 = {8, 60, 4, 5};
    int list[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 15, 20, 30, 100, 126, 127};
    int size = sizeof(list) / sizeof(list[0]);

    for(int k = 0; k < size; k++)
        printf("Ex 6.1 TestVal %d, RetVal %d\n", list[k], returnIfMultiples(list[k], m1));

    for(int k = 0; k < size; k++)
        printf("Ex 6.2 TestVal %d, RetVal %d\n", list[k], returnIfMultiples(list[k], m2));
    
    for(int k = 0; k < size; k++)
        printf("Ex 6.3 TestVal %d, RetVal %d\n", list[k], returnIfMultiples(list[k], m3));
}