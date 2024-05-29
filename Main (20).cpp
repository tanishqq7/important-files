// You are using GCC
#include <stdio.h>
int main() {
    int y;
    scanf("%d",&y);
    if (y%400==0)
    {
        printf("\nyear is leap year");
    }
    else if (y%100==0)
    {
        printf("\n leap year");
    }
    else if (y&4==0)
    {
        printf("\nleap year");
    }
    else 
    {
        printf("\nnon leap year");
    }
    return 0;
}