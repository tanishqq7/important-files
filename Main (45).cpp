#include<stdio.h>
int main()
{
int marks[3][5],i,j;
int max;
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
max=marks[i][0];
printf("\nMarks of student no. %d\n",i+1);
for(j=0;j<5;j++)
{
printf("%d ",marks[i][j]);
if(marks[i][j]>max)
{
max=marks[i][j];
}
}
printf("\nThis student has scored maximum marks:%d",max);
}
return 0;
}