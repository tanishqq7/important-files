// You are using GCC
#include <stdio.h>
int main () {
    float a;
    scanf("%f",&a);
    a < 100?printf("%2f",a*1):a>=100&a<=500?printf("%.2f",a*1.5):printf("%.2f",a*3);
    return 0;
    
}