#include "test.h"

void print(char *ch)
{
    printf("ch is %s\n", ch);
}

bool compare(int a, int b)
{
    if (a > b)
    {
        return true;
    }
    else
    {
        return false;
    }
}