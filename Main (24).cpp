// You are using GCC
#include <stdio.h>
int main() {
    int i = 1,n;
    long long int fact = 1;
    scanf("%d",&n);
    while (1<=n)
    {
        fact = fact*i;
        i = i+1;
    }
    printf("\nfactorial is : %lld",fact);
    return 0;
}
    