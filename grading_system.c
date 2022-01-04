#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks(0-100)\n");
    scanf("%d", &marks);

    if(marks>90 && marks<=100)
    {
        printf("Your grade is A\n");
    }

    else if(marks>80 && marks<=90)
    {
        printf("Your grade is B\n");
    }

    else if(marks>70 && marks<=80)
    {
        printf("Your grade is C\n");
    }

    else if(marks<70 && marks>=0)
    {
        printf("Your grade is F\n");
    }

    else
    {
        printf("Invalid marks\n");
    }

    return 0;
}