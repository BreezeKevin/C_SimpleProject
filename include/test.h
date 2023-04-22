#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum{
    true=0,
    false=-1
}bool;

void print(char *ch);
bool compare(int a, int b);

int getIvNum(char *data, int length);