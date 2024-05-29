// You are using GCC
#include <stdio.h>
void add();
int main() {
    int i,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    add();
    return 0;
}
void add(){
    int a,b,c;
    scanf("%d\t%d",&a,&b);
    c=a+b;
    printf("\nSum is: %d",c);
}
