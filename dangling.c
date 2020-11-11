#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 56;
    b = 98;
    sum = a + b;
    return &sum;
}

int main()
{
    //Case1: Deallocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 54;
    ptr[1] = 26;
    ptr[2] = 14;
    ptr[3] = 50;
    free(ptr); //ptr is now dangling pointer

    //Case2: Function returning local variables
    int *dangPtr = functionDangling(); //dangPtr is now dangling pointer

    int *danglingPtr3;
    //Case3: If a variable goes out of scope
    {
        int a =12;
        danglingPtr3= &a;
    }
    //Here Variable "a" goes out of scope
    return 0;
}