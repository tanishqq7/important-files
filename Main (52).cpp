#include<stdio.h>
void linear(int[],int,int);
int main()
{
int n,key,i;
printf("\nEnter n:");
scanf("%d",&n);
int a[n];
printf("\nEnter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter key element to search:");
scanf("%d",&key);
linear(a,n,key);
return 0;
}
void linear(int x[],int size,int element)
{
int i,loc=-1;
for(i=0;i<size;i++)
{
if(x[i]==element)
{
loc=i;
break;
}
}
if(loc!=-1)
{
printf("\nElement found at:%d index and exact location:%d",loc,loc+1);
}
else
{
printf("\nElement not found");
}
}