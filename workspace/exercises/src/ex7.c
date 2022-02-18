#include "utilities.h"

void ex7()
{
    uint32_t A = 20;
    uint32_t B = 19;
    uint32_t *C;

    C = pickPointer(&A, &B);
    printf("Exercise 7 - Case 1:  ");
    printf("Data1 = %d (@%p), Data2 = %d (@%p), Returned Pointer To %p Value Is %d\n", A, &A, B, &B, C, C[0]);
    
    printf("Exercise 7 - Case 2:  ");
    A = 20;
    B = 20;
    C = pickPointer(&A, &B);
    printf("Data1 = %d (@%p), Data2 = %d (@%p), Returned Pointer To %p Value Is %d\n", A, &A, B, &B, C, C[0]);

    printf("Exercise 7 - Case 3:  ");
    A = 20;
    B = 21;
    C = pickPointer(&A, &B);
    printf("Data1 = %d (@%p), Data2 = %d (@%p), Returned Pointer To %p Value Is %d\n", A, &A, B, &B, C, C[0]);
}