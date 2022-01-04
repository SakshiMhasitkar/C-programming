#include <stdio.h>
int main()
{
    int income;
    printf("Enter your income\n");
    scanf("%d", &income);

    if(income<2,50,000)
    {
        printf("The amount of tax you have to pay is 0");
    }

    else if(income>=2,50,000 && income<5,00,000)
    {
        printf("The amount of tax you have to pay is %f", income*0.05);
    }

    else if(income>=5,00,000 && income<10,00,000)
    {
        printf("The amount of tax you have to pay is %f", income*0.2);
    }

    else if(income>=10,00,000)
    {
        printf("The amount of tax you have to pay is %f", income*0.3);
    }
    return 0;
}