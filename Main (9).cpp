// You are using GCC
#include <stdio.h>
int main () {
    int m;
    float s;
    scanf("%d",&m);
    scanf("%f",&s);
    (m > 6)?(s > 50.5)?printf("\neligible for next round"):printf("Try again...."):printf("Not elegible");
    return 0;
}