// You are using GCC
#include <stdio.h>
int main () {
    int x;
    label1:
    printf("\nEnter value of x:");
    scanf("%d",&x);
    if(x>100)
    {
        goto label1;
    }
    printf("\n value of x is correct now");
    return  0;
}