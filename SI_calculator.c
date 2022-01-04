#include <stdio.h>
int main()
{
    int principal=400, years=2, rate=3;
    int simpleinterest= principal*years*rate/100;
    printf("The simple interest is %d", simpleinterest);
    return 0;
}