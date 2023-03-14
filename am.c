//wap to store 10 numbers into a data file named "num.txt"
#include<stdio.h>
int main()
{
    FILE *ptr;
    int i;
    ptr=fopen("num.txt","w");
    if(ptr==NULL)
    {
        printf("file could not be open .");

    }
    else
    {
        for (i=1;i<=10;i++)
        fprintf(ptr,"%d\n",i);
        fclose(ptr);
        printf("data saved.");
    }
return 0;
}

