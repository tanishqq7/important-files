// You are using GCC
#include <stdio.h>
int main () {
    int n,i,t1=0,t2=1,next;
    printf("\nEnter number of terms to be printed:");
    scanf("%d",&n);
    for (i=1;i<=n;i++);
    {
        printf("%d",t1);
        next = t1+t2;
        t1=t2;
        t2=next;
    }
    return 0;
}