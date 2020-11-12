#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("File name is %s\n", __FILE__);
    printf("Todays Date  is %s\n", __DATE__);
    printf("Time is %s\n", __TIME__);
    printf("Line Number  is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}