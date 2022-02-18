#include "utilities.h"

void ex2(void)
{
    float r;

    // Case 1
    printf("Exercise 2 - Case 1\n");
    r = 1.0;  // Make sure that you do the ".0" so the number is cast properly; some compilers are fincky about this
    calcArea(r);

    // Case 2
    printf("Exercise 2 - Case 2\n");
    r = 2.245;
    calcArea(r);
}