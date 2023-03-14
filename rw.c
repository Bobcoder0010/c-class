/*Wap*/
#include<stdio.h>
int main()
{
    FILE*fp;
    char num [100];
    fp=fopen("num.txt","w+");
    printf("enter your text:");
    gets(num);
    fprintf(fp,"%s",num);
    rewind(fp);
    printf ("your text is :\n");
    while (feof(fp)==0)
    printf ("%c",getc(fp));
    fclose(fp);
return 0;
}