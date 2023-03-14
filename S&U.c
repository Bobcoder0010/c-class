#include<stdio.h>

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
