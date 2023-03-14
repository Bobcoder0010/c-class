/* #include<stdio.h>

struct student
{
    char name[50];
    int roll;
    int age;
};

int main()
{
    struct student s;
    printf("Enter your name: ");
    scanf("%s", s.name);
    printf("Enter your roll number: ");
    scanf("%d", &s.roll);
    printf("Enter your age: ");
    scanf("%d", &s.age);
    printf("\nHello %s, your roll number is %d and you are %d years old.", s.name, s.roll, s.age);
    return 0;
}
*/

#include <stdio.h>

int main() {
    char name[10][20];
    int age[10];
    float salary[10];
    float total_salary = 0.0;
    
    printf("Enter name, age, and salary for 10 employees:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name[i]);
        printf("Age: ");
        scanf("%d", &age[i]);
        printf("Salary: ");
        scanf("%f", &salary[i]);
        total_salary += salary[i];
    }
    
    printf("Employee Name\tAge\tSalary\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\t%d\t%.2f\n", name[i], age[i], salary[i]);
    }
    printf("Total salary of all employees: %.2f\n", total_salary);
    
    return 0;
}

