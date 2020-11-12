#include <stdio.h>
#include <stdlib.h>
int isPalindrome(int num)
{
    int reverse = 0;
    int originalNumber = num;
    //Reverse the number
    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }
    printf("The Reversed number is %d\n", reverse);
    if (originalNumber == reverse)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter the number to check whether the number is palindrome or not: \n");
    scanf("%d", &num);

    if (isPalindrome(num))
    {
        printf("The number is a palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome\n");
    }

    return 0;
}