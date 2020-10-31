#include <stdio.h>
void printStar(char str[])
{
    int i = 0;
    while (str[i!='\0'])
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    char str[] = {'a','n','u','b','h','a','v', '\0'};
    printStar(str);
    return 0;
}