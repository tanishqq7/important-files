// You are using GCC
#include <stdio.h>
void call_by_reference(int*,int*);
int main(){
    int a,b;
    printf("\nEnter a and b:");
    scanf("%d%d",&a,&b);
    call_by_reference(&a,&b);
    printf("\nSwapped values are:%d,%d",a,b);
    return 0;
}
void call_by_reference(int *p1,int *p2){
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
}