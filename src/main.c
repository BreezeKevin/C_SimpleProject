#include"test.h"

void main(int argc, char *argv[]) {
    int a = 10;
    int c = 5;
    int *b = &a;
    char *ch = "Hello, world!";
    print(ch);
    bool result =compare(a,c);
    printf("result %d\n", result);
    int MAX = 16;
    char buf[MAX];
    (void)getIvNum(buf,MAX);
    printf("bufout: %s;\n",buf);
    printf("exec: %s\n",argv[0]);
    char tempFile[256];
    (void)sprintf(tempFile, "%s.iv", argv[0]);
    printf("tempFile: %s\n",tempFile);
    FILE *fp2 = 0;
    if ((fp2 = fopen(tempFile, "w")) == 0)
    {
        printf("open file %s fail\n", tempFile);
    }
    (void)fputs(buf,fp2);
    fclose(fp2);
    if ((fp2 = fopen(tempFile, "r")) == 0)
    {
        printf("open file %s fail\n", tempFile);
    }
    fseek(fp2,0,SEEK_END);
    int file_size = ftell(fp2);
    printf("file_size: %d\n",file_size);
    (void)fscanf(fp2, "%s", buf);
    printf("bufof2: %s;\n",buf);

}
