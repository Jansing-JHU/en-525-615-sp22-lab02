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
