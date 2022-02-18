#include "utilities.h"

void myPrettyPrint(char *ptr, int size)
{
    // printf("Inside Pretty Print, size of array is = %u\n", size);
    for(int k = 0; k < size; k++)
    {
        printf("%c ", ptr[k]);
    }
    printf("\n");
}

char* reverseArray(char in[], int size)
{
    // static char out[256];  // Making assumption that string won't be bigger than 256 characters
    static char *out;
    out = malloc(sizeof(char) * size);

    for(int k = 0; k < size; k++)
    {
        out[k] = in[size - 1 - k];
    }

    return out;
}

void calcArea(float r)
{
    float a;

    a = PI * r * r;

    printf("Radius %2.6f, Area %2.6f\n", r, a);
}

float calcDistance(Point p1, Point p2)
{
    float d;
    d = (float)sqrt((float)pow(p1.x - p2.x, 2.0) + 
                    (float)pow(p1.y - p2.y, 2.0));
    return d;
}

void printDistances(Point p1, Point p2, float d)
{
    printf("(%2.6f, %2.6f) to (%2.6f, %2.6f) Distance %2.6f\n", p1.x, p1.y, p2.x, p2.y, d);
}

void printSum(uint16_t *ptr, int size)
{
    for(int k = 0; k < size; k++)
    {
        printf("%d ", ptr[k]);
    }
    printf("\n");
}

uint16_t* sumAfter(uint16_t in[], int size)
{
    static uint16_t *out;
    out = malloc(sizeof(uint16_t) * size);

    for(int k = 0; k < size; k++)
    {
        out[k] = in[k];
        for(int j = k + 1; j < size; j++)
        {
            out[k] += in[j];
        } 
    }

    return out;
}

uint16_t* sumBefore(uint16_t in[], int size)
{
    static uint16_t *out;
    out = malloc(sizeof(uint16_t) * size);

    for(int k = 0; k < size; k++)
    {
        out[k] = in[k];
        for(int j = 0; j < k; j++)
        {
            out[k] += in[j];
        } 
    }

    return out;
}

// In Exercise 6 (for 6.1, 6.2, and 6.3), there are always three multiples
int returnIfMultiples(int value, mults m)
{
    // Number out of range
    if ((value < m.startRange) || (value > m.stopRange))
        return -1;
    
    // Check for multiples
    if (!(value % m.m1) && !(value % m.m2))
        return -4;
    if (!(value % m.m1))
        return -2;
    if (!(value % m.m2))
        return -3;
    
    // None of these?  Return the value
    return value;
}

uint32_t* pickPointer(uint32_t *A, uint32_t* B)
{
    if ((A[0] == B[0]) || (A[0] > B[0]))
        return A;
    else
        return B;
}

uint32_t bitFlipping(uint32_t A, uint32_t B, int caseIndex)
{
    uint32_t mask = 0;
    uint32_t C = 0;

    switch (caseIndex)
    {
        case 1:
            if ((B < 0) || (B > 31))
            {
                printf("B = %d is not an index\n", B);
                return -1;
            }
            else
            {
                mask = 0x01;
                mask = mask << B;
                C = A & (~mask);
            }
            break;
        case 2:
            C = A & (~B);
            break;
        case 3:
            if ((B < 0) || (B > 31))
            {
                printf("B = %d is not an index\n", B);
                return -1;
            }
            else
            {
                mask = 0x01;
                mask = mask << B;
                C = A | mask;
            }
        case 4:
            C = A | B;
            break;
    }

    return C;
}

int initEx9(ex9struct* A, uint32_t val1, uint32_t val2)
{
    if ((val1 <= 400) || (val2 <= 400))
        return -1;
    
    A[0].data1 = val1;
    A[0].data2 = val2;

    return 0;
}

void prettyPrintEx9(uint32_t data1, uint32_t data2)
{
    ex9struct A;

    printf("Ex 9 Data1 %d, Data2 %d | ", data1, data2);
    int retFlag = initEx9(&A, data1, data2);
    if (retFlag < 0)
        printf("initEx9 error return code -1\n");
    else
        printf("ex9struct.data1 = %d, ex9struct.data2 = %d\n", A.data1, A.data2);
}