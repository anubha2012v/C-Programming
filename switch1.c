#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    float km, miles, inch, pound, kg;
    printf("Hola Kuddos! Welcome to Conversions\n");
    printf("Select Which Conversion you want.\n");
    printf("1.Kilometers to Miles\n 2.Miles to inches\n 3.Pounds to Kilogram\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Enter the Kilometer: \n");
        scanf("%f", &km);
        miles = km * 0.621371;
        printf("The conversion of kilometer in miles is %f \n", miles);
        break;

    case 2:
        printf("Enter the Miles: \n");
        scanf("%f", &miles);
        inch = miles * 63660;
        printf("The Conversion of Miles in inches is %f \n", inch);
        break;

    case 3:
        printf("Enter the Pound: \n");
        scanf("%f", &pound);
        kg = pound * 0.454;
        printf("The Conversion of Pound in Kilogram is %f \n", kg);
        break;

    default:
        break;
    }
    return 0;
}
