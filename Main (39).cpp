// You are using GCC
#include <stdio.h>
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main() {
    int n;
printf("\nEnter number:");
scanf("%d",&n);
printf("\nFactorial is:%d",factorial(n));
return 0;
}

