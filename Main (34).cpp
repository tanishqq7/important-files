// You are using GCC
#include <stdio.h>
int main () {
    int x;
    scanf("%d",&x);
    if (x%2==0)
    {
        goto even;
    }
    else {
        goto odd;
    }
    even:
        printf("\neven");
        goto end;
    odd:
        printf("\nodd");
    end:
    return 0;
}