// You are using GCC
#include <stdio.h>
int sum(int n){
    if(n==0){
        return n;
    } else{
        return n+sum(n-1);
    }
}
int main(){
    int n;
    printf("\nEnter limit:");
    scanf("%d",&n);
    printf("\nSum is: %d",sum(n));
    return 0;
}

