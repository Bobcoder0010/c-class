//matrix multiplication using two dmension array
//matrix multiplication using two dmension array
#include<stdio.h>
#include<conio.h>
#define R 10
#define c 10
int main()
     {
        int mat1[R][C],mat2[R][C],mat3[R][C];
        int i,j,k,m,n,p,q;
        printf ("enter the order of first matrix:");
        scanf("%d%d",&m,&n);
        printf ("enter the order of second matrix:");
        scanf("%d%d",&p,&q);
        if (n!=p)
        {
          printf("\nMatrix A\n");
          for (i=0;j<n;j++)
          {
               printf("enter the value of A%d%d:  ",i+1,j+1);
               scanf("%d",&mat1[i][j]);
          }
        }
        printf("\nmatrix B\n");
        for (i=0;i<p;i++);
        {
          for (j=0;j<q;j++);
          {
               printf("enter  the value of B%d%d :",i+1,j+1);
               scanf( "%d",&mat2[i][j]);
          }
        }

printf("\nresultant matrix is :\n");
        for (i=0;i<m;i++);
        {
          for(j=0;j<q;j++)
     
        {
        mat3[i][j]=0;
        for(k=0;k<n;k++)
        {
          mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
        }
        printf("%d\t",mat3[i][j]);
     
        }
        printf("\n");
        }

    }