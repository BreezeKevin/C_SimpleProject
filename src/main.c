#include"test.h"

void main() {
    int a = 10;
    int c = 5;
    int *b = &a;
    char *ch = "Hello, world!";
    print(ch);
    bool result =compare(a,c);
    printf("result %d", result);
}
