// You are using GCC
#include<stdio.h>
int main() {
    float radius, area;
    float *pr=&radius, *pa=&area;
    printf("\nEnter radius:");
    scanf("%f",pr);
    *pa=3.14*(*pr)*(*pr);
    printf("\nArea of circle is:%.2f",*pa);
    return 0;
}