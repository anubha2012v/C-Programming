#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the Number: ");
    scanf("%d",&a);

   printf("Multiplication table of %d is as follows: \n", a);
   for (int i = 1; i < 11 ; i++)
   {
       printf("%d X %d = %d\n", a, i, a * i);
   }
   
    return 0;
}
