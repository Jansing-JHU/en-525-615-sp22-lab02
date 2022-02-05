#include "utilities.h"

int main(void)
{
    #if ECLIPSE_FLUSH_FIX == (1)
    //WARNING: This doesn't like it if you don't have a new line (ie \n)
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    #endif

    ex1();
}