// You are using GCC
#include <stdio.h>
int main () {
    int x;
    label1:
    
    scanf("%d",&x);
    if(x>100 && x<=200)
    {
        goto label1;
    }
    else if(x<=100)
    {
        goto label2;
    }
    printf("\n value of x is greater than 200");
    return 0;
    label2:
    printf("\nvalue of x is correct now[less than or equal to 100]");
    return  0;
}