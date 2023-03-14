
#include<stdio.h>

int fib(int n) {
    if (n==1)
        return 0;
    else if (n==2)
        return 1;
    else
        return fib(n-2) + fib(n-1);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %dth term of Fibonacci series is %d", n, fib(n));
    return 0;
}
