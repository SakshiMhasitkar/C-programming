#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
// == equals, >= greater than or equal to, <= less than or equal to, != not equal to
    if(age>=18)
    {
        printf("You are %d so you are eligible to drive.\n", age);
    }
    
    else
    {
        printf("You are %d so you are not eligible to drive.\n", age);
    }
    return 0;
}