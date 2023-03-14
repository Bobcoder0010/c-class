// wap to store 10 numbers into a data file named "num.txt"
#include <stdio.h>
int main()
{
    FILE *ptr;
    int n,s = 0;

    ptr = fopen("num.txt", "r"); // open the file for reading purpose
    if (ptr == NULL)
    {
        printf("file could not be open .");
    }
    else
    {
        while(feof(ptr)==0)
        {
          if(fscanf(ptr,"%d",&n)==1)  
          s+=n;
        }
    
    printf("sum of numbers in the file is : %d",s);
     }
      fclose(ptr);
       
    
    return 0;
}
// wap to calculate the sum of numbers stored in a data file named "num.txt"
