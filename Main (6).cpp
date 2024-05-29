// You are using GCC
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    (a > b)?(a>c)?printf("\na is greatest"):printf("\nc is greatest"):(b>c)?printf("\nb is greatest"):printf("\nc is gratest");
    return 0;
}