#include<stdio.h>
void main()
{
    int x,y,*ptr;
    x= 10;
    ptr=&x;
    y=*ptr;
     
     printf("value of x is %d\n\n",x);
     printf("%d is stored at address %u\n",x,&x);
     printf("%d is stored at address %u\n",&x,&x);
     printf("%d is stored at address %u\n",*ptr,&x);
     printf("%d is stored at address %u\n",y,&*ptr);
     printf("%d is stored at address %u\n",ptr,&ptr);
     printf("%d is stored at address %u\n",y,&y);
     *ptr=25;
     printf("\n now x= %d\n",x)
     return 0;
}