// You are using GCC
#include <stdio.h>
int main () {
    int n,i,status = 0;
    printf("\nEnter n:");
    scanf("%d",&n);
    for (i = 2;i<=n/2;i++)
    {
        if(n%i==0);
        {
            status = 1;
            break;
        }
    }
    if (status == 0)
    {
        printf("\nprime");
    }
    else
    {
        printf("\nnon prime");
    }
    return 0;
}