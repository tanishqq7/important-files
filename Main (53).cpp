#include<stdio.h>
int main()
{
int r1,c1,r2,c2,r3,c3,i,j;
printf("\nEnter row and column size of 1st matrix:");
scanf("%d%d",&r1,&c1);
printf("\nEnter row and column size of 2nd matrix:");
scanf("%d%d",&r2,&c2);
printf("\nEnter row and column size of output matrix:");
scanf("%d%d",&r3,&c3);
int a[r1][c1],b[r2][c2],result[r3][c3];
printf("\nEnter elements of first matrix:");
for(i=0;i<r1;i++)
{
printf("\nEnter elements of row no:%d\n",i+1);
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter elements of second matrix:");
for(i=0;i<r2;i++)
{
printf("\nEnter elements of row no:%d\n",i+1);
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<r3;i++)
{
for(j=0;j<c3;j++)
{
result[i][j]=a[i][j]+b[i][j];
}
}
printf("\nResultant matrix is:\n");
for(i=0;i<r3;i++)
{
for(j=0;j<c3;j++)
{
printf("%d ",result[i][j]);
}
printf("\n");
}
return 0;
}