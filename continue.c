#include <stdio.h>
int main()
{
    printf(" Hello World\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d Enter Your age: \n", i);
        scanf("%d", &age);

        if (age > 10)
        {
            continue;
        }
        printf(" We have not come across continue..\n");
    }
    return 0;
}
