#include <stdio.h>
int main()
{
    int i,j, a, b;
    printf("Press 0 to Print Triangular star pattern and 1 for reverse star pattern: \n");
    scanf("%d",&a);

    printf("Enter the number of rows of the pattern: ");
    scanf("%d", &b);
    

    if (a == 0)
    {
        for ( i = 1; i < b; i++)
        {
            for ( j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }
    else
    {
        for ( i = 1; i <= b; i++)
        {
            b--;
            for ( j = 1; j < b + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }
    
    return 0;
}
