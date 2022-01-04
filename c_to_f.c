#include <stdio.h>
int main()
{
    float c;
    printf("Enter the temp in °C");
    scanf("%f", &c);
    float f = (c * 9/5) + 32;
    printf("The given temp in F is %f", f);
    return 0;
}