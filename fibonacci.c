#include <stdio.h>

// Recursive process of fibonacci series will take more time, whereas Iterative process will take less time.
int fib_recursive(int n)
{
    if(n == 1 || n ==2){
        return n - 1;
    }
    else {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
    return 0;
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n-1; i++)
    {
        b = a + b; 
        a = b - a;
    }
    
    return a;
}

int main(int argc, char const *argv[])
{
    int number;
    printf("Enter a number to find the fibonacci series\n");
    scanf("%d", &number);

    printf("The value of fibonacci number at position no %d using iterative approach is %d\n", number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n",number, fib_recursive(number));
    return 0;
}
