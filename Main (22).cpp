// You are using GCC
#include <stdio.h>
int main() {
    char character;
    printf("\nEnter character:");
    scanf("%c",&character);
    switch(character)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("\nvowel");
        break;
        default:
        printf("\nnon vowel");
    }
    return 0;
}