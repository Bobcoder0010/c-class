#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[]={9,5,7,12,1,85,5,81,6,78,82};
int i,j, temp,n=sizeof(arr)/sizeof (int);
             printf("Before sorting...\n");
       for (i=0;i<n;i++)
                    printf("%d  ",arr[i]);
                    for (i=0;i,i<n-1;i++)
  {
        for (j=0;j<n-1;j++)
           {
               if (arr[j]>arr[j+1])
                  {
                            temp=arr[j];
                             arr[j]=arr[j+1];
                                 arr[j+1];
                  }
  }
                        printf("\nAfter sorting...\n");
                        for (i=0;i<n;i++)
                        printf("%d  ",arr[i]);
                            return 0;
}
}