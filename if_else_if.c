#include <stdio.h>
int main()
{

    //operator precedence priority
    //(!) (* / %) (+ -) (< > <= >=) (== !=) (&&) (||) (=)
    int num;
    printf("Enter your number:\n");
    scanf("%d", &num);

    if(num==1)
    {
        printf("Your number is 1\n");
    }

    else if(num==2)
    {
        printf("Your number is 2\n");
    }

    else if(num==3)
    {
        printf("Your number is 3\n");
    }

    else
    {
        printf("Your number is not 1, 2 or 3\n");
    }
    
    printf("Have a good day\n");
    return 0;
}