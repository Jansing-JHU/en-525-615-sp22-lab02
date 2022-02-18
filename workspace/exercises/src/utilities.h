#include <stdio.h>       //for printf
#include <stdlib.h>      //srand,rand
#include <string.h>      //for memcpy/strcpy
#include <unistd.h>      //for sleep
#include <time.h>        //for clock
#include <math.h>

#define ECLIPSE_FLUSH_FIX (1)  //Conditionally Disable Buffering print messages
#define PI 3.1415926535

typedef struct
{
    float x, y;
} Point;

typedef struct
{
    int startRange, stopRange;
    int m1, m2;
} mults;

typedef struct
{
    uint32_t data1, data2;
} ex9struct;

// Prototypes for utilities.c
void myPrettyPrint(char *, int);
char* reverseArray(char[], int);
void calcArea(float);
float calcDistance(Point, Point);
void printDistances(Point, Point, float);
void printSum(uint16_t*, int);
uint16_t* sumAfter(uint16_t[], int);
uint16_t* sumBefore(uint16_t[], int);
int returnIfMultiples(int, mults);
uint32_t* pickPointer(uint32_t*, uint32_t*);
uint32_t bitFlipping(uint32_t A, uint32_t B, int caseIndex);
int initEx9(ex9struct* A, uint32_t val1, uint32_t val2);
void prettyPrintEx9(uint32_t, uint32_t);

// Prototypes for the exercises
void ex1(void);
void ex2(void);
void ex3(void);
void ex4(void);
void ex5(void);
void ex6(void);
void ex7(void);
void ex8(void);
void ex9(void);