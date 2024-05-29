// You are using GCC
#include<stdio.h>
void reference(int[],int);
void value(int);
int main()
{
int arr[]={1,2,3,4,5};
int i;
printf("\n Elements by reference:");
reference(arr,5);//Passing array by call by reference
printf("\n");
printf("\n Elements by value:");
for(i=0;i<5;i++)
{
value(arr[i]);//Passing array value by Call by value
}
return 0;
}
void reference(int x[],int size)
{
int i;
for(i=0;i<size;i++)
{
printf("%d ",x[i]);
}
}
void value(int u)
{
printf("%d ",u);
}