#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    int r; 
    float c;
    printf("Enter the radius of the circle: \n");
    scanf("%d",&r);
    c = PI * (r * r);
    printf("The Area of the circle is: %0.2f", c);
    return 0;
}