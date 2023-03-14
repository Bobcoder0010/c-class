/*wap to count the number of character present ina data file named "num.txt"*/
#include<stdio.h>
int main()
{
    FILE*fp;
    long count;
    fp=fopen("num.txt","r");
    fseek(fp,0l,2);
    count =ftell(fp);
    fclose(fp);
    printf("no.of character : %ld",count);
    return 0;
}