#include <stdio.h>       //for printf
#include <stdlib.h>      //srand,rand
#include <string.h>      //for memcpy/strcpy
#include <unistd.h>      //for sleep
#include <time.h>        //for clock

#define ECLIPSE_FLUSH_FIX (1)  //Conditionally Disable Buffering print messages

// Prototypes for utilities.c
void myPrettyPrint(char *ptr, int size);
char* reverseArray(char in[], int size);

// Prototypes for the exercises
void ex1(void);