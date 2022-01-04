#include <stdio.h>
int main()
{
    int a=10, b=20;
    float c=10.5;
    char d='s';
    printf("The value of a + b is %d\n",a+b);
    printf("The value of b / a is %d\n",b/a);
    printf("The value of a * b is %d\n",a*b);
    printf("The value of b - a is %d\n",b-a);
    printf("The remainder when b / a is %d\n",b%a);
    printf("The value of a + c is %f\n",a+c);
    printf("The character is %c\n",d);
    return 0;
}