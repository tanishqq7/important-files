// You are using GCC
//#include <stdio.h>
// #define PI 3.14
// int main(){
    // float radius = 34.67,area,circum;
    // area = PI*radius*radius;
    // printf("area: %f",area);
    // circm = 2*PI*radius;
    // printf("circm: %f",circm);
    // printf("sum: %f",area + circm);
    // return 0;

// }
// 
// #include <stdio.h>
// int main() {
//     int no_of_units = 10;
//     float price = 3.45,total_amount,discount;
//     printf("\nTotal amount without discount: %2f",total_amount);
//     discount = 0.10*total_amount;
//     printf("\nYou got discount of Rs. %2f",discount);
//     printf("\nyou need to pay: Rs. %2f after applying discount",total_amount discount);
//     return 0;
    
// }
#include <stdio.h>
int main() {
    int p = 23000;
    float r=2.34,t=4.5,si,amount;
    si=(p*t*r)/100.0;
    printf("\nfinal amount to pay:%2f",si);
    amount = p+si;
    printf("\nfinal amout: %2f",amount);
    return 0;
}