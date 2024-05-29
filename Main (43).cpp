#include<stdio.h>
int main()
{
int n,i;
printf("\nEnter n:");
scanf("%d",&n);
float a[n],sum=0.0,avg=0.0;
printf("\nEnter array elements:");
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("\nSum is:%.2f and Average is:%.2f",sum,avg);
return 0;
}