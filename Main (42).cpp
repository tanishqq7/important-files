// You are using GCC
#include <stdio.h>
int main() {
    int a[5]={2,5,8,9,4};
    int i;
    for (i=0;i<5;i++){
        a[i]= a[i]*2;
    }
    printf("\nupdted number are:");
    for(i=0;i<5;i++){
        printf("%d",a[i]);
    }
}