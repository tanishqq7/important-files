// You are using GCC
#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    (num == 0)?printf("\nzero"):(num > 0)?printf("\npositive"):printf("\nnegative");
    return 0;
}