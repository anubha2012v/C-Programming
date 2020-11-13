#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int (*fun)(int, int);
    fun = sum;
    int res1 = fun(20, 20);
    int res2 = sum(20, 20);
    printf("Using function pointer: %d\n", res1);
    printf("Using function name: %d\n", res2);

    return 0;
}