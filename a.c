#include<stdio.h>
#include<conio.h>
int main()
{
    int mat[2][2], i, j, sum;
    sum = 0;
    printf("Enter all 4 elements of 2*2 Matrix:-\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &mat[i][j]);
            sum = sum + mat[i][j];
        }
    }
    printf("\nSum of all elements = %d", sum);
    getch();
    return 0;
}
