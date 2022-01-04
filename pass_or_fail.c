#include <stdio.h>
int main()
{
    int phymarks, chemmarks, mathmarks;
    
    printf("Enter your physics marks\n");
    scanf("%d", &phymarks);

    printf("Enter your chemistry marks\n");
    scanf("%d", &chemmarks);

    printf("Enter your maths marks\n");
    scanf("%d", &mathmarks);

    int totalmarks= (phymarks + chemmarks + mathmarks)/3;

    if(totalmarks>=40 && phymarks>=30 && chemmarks>=30 && mathmarks>=30)
    {
        printf("Your total percentage is %f and you have passed the exam" ,totalmarks);
    }

    else
    {
        printf("Your total percentage is %f and you have not passed the exam" ,totalmarks);
    }
    return 0;
}