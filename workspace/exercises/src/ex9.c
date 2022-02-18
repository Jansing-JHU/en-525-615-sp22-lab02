#include "utilities.h"

void ex9(void)
{

    uint32_t data1, data2;
    int retFlag;

    data1 = 400;
    data2 = 400;
    prettyPrintEx9(data1, data2);
    
    data1 = 401;
    data2 = 401;
    prettyPrintEx9(data1, data2);

    data1 = 400;
    data2 = 401;
    prettyPrintEx9(data1, data2);

    data1 = 401;
    data2 = 400;
    prettyPrintEx9(data1, data2);
}