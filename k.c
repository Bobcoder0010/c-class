/*wap  to update the salary of each employee by 10 percent . suppose that there is a data file named ""*/
#include <stdio.h>
void updates()
{
FILE *fp1,*fp2;
int id ;
char name [100];
float sal;
fp1=fopen("emp.dat","r");
fp2=fopen("temp.dat","w");



{
    fscanf(fp1,"%d%s%f",&id,name,&sal);
    Fprintf(fp2,"%d%s%f",id ,name , sal*1.1);
}
fclose(fp1);
fclose(fp2);
}

void main()
{
    updates ();
    return 0;

}