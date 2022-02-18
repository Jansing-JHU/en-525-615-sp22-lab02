#include "utilities.h"

int main(void)
{
    #if ECLIPSE_FLUSH_FIX == (1)
    //WARNING: This doesn't like it if you don't have a new line (ie \n)
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    #endif

    ex1();
    printf("-------------------\n");
    ex2();
    printf("-------------------\n");
    ex3();
    printf("-------------------\n");
    ex4();
    printf("-------------------\n");
    ex5();
    printf("-------------------\n");
    ex6();
    printf("-------------------\n");
    ex7();
    printf("-------------------\n");
    ex8();
    printf("-------------------\n");
    ex9();
    printf("-------------------\n");
}