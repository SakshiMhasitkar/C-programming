#include <stdio.h>
int main()
{
    //logical operators: && AND, || OR, ! NOT
    int age;
    int VIPpass=0;
    VIPpass=1;
    printf("Enter your age:\n");
    scanf("%d", &age);

    if((age<=75 && age>=18) || VIPpass==1)
    {
        printf("You are eligible to drive");
    }

    else
    {
        printf("You are not eligible to drive");
    }
    return 0;
}