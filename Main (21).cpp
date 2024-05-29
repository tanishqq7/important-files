// You are using GCC
#include <stdio.h>
int main () {
    int choice;
    printf("\nEnter any value from 1-7");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nmonday");
        break;
        
        case 2:
        printf("\ntuesday");
        break;
        
        case 3:
        printf("\nwedneday");
        break;
        
        case 4:
        printf("\nthrusday");
        break;
        
        case 5:
        printf("\nfriday");
        break;
        
        case 6:
        printf("\nsaturday");
        break;
        
        case 7:
        printf("\nsunday");
        break;
        
        default:
        printf("\ninvalid");
    }
    return 0;
}