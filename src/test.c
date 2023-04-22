#include "test.h"

#define URANDOM "/dev/urandom"
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

int getIvNum(char *data, int length)
{
    FILE *fp = 0;
    int index = 0;
    char r;
    if ((fp = fopen(URANDOM, "r")) == 0)
    {
        printf("open file %s fail\n", URANDOM);
        return false;
    }
    
    while (index < length)
    {
        r = fgetc(fp);
        printf("r:%c;\n",r);
        data[index] = r;
        ++index;
        
    }
    printf("bufinf: %s;\n", data);
    printf("open file %s success\n", URANDOM);
    fclose(fp);
    return true;
}