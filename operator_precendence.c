#include <stdio.h>
int main()
{
    //order of operations is * / % + - =
    int x=5, y=7;
    printf("The value of 3x-4y is %d\n", 3*x-4*y);

    printf("The value of 3x-4+7/y is %d\n", 3*x-4+7/y);
    return 0;
}