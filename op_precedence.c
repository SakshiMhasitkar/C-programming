#include <stdio.h>
int main()
{
    int x=2, y=3, z=3, k=1;
    printf("The value of 3*x/y-z+k is %d", 3*x/y-z+k);
    //Expected ans: 3*x=6, 6/y=2, 2-z=-1, -1+k=0 so final ans should be 0
    return 0;
}