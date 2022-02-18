#include "utilities.h"

void ex3(void)
{
    Point p1, p2;

    p1.x = 0.0;
    p1.y = 0.0;
    p2.x = 0.0;
    p2.y = 1.0;

    printf("Exercise 3 - Case 1\n");
    float d = calcDistance(p1, p2);
    printDistances(p1, p2, d);

    p1.x = 0.0;
    p1.y = 0.0;
    p2.x = 1.0;
    p2.y = 1.0;

    printf("Exercise 3 - Case 2\n");
    d = calcDistance(p1, p2);
    printDistances(p1, p2, d);
}