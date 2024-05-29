#include<stdio.h>
int main()
{
int marks[3][5],i,j;
float avg=0.0,sum=0.0;
for(i=0;i<3;i++)
{
printf("\nEnter marks of student no. %d\n",i+1);
for(j=0;j<5;j++)
{
scanf("%d",&marks[i][j]);
}
}
for(i=0;i<3;i++)
{
sum=0.0;
printf("\nMarks of student no. %d\n",i+1);
for(j=0;j<5;j++)
{
printf("%d ",marks[i][j]);
sum=sum+marks[i][j];
}
avg=sum/5;
printf("\nAverage marks scored are:%.2f",avg);
}
return 0;
}