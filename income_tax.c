#include <stdio.h>
int main()
{
    int income;
    printf("Enter your income\n");
    scanf("%d", &income);

    if(income<250000)
    {
        printf("The amount of tax you have to pay is 0");
    }

    else if(income>=250000 && income<500000)
    {
        printf("The amount of tax you have to pay is %f", income*0.05);
    }

    else if(income>=500000 && income<1000000)
    {
        printf("The amount of tax you have to pay is %f", income*0.2);
    }

    else if(income>=1000000)
    {
        printf("The amount of tax you have to pay is %f", income*0.3);
    }
    return 0;
}
