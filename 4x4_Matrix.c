#include<stdio.h>
int main(void)
{
int mat[10][10],i,j;
printf("Enter your numbers\n");
for(i=0;i<4;i++)
for(j=0;j<4;j++)
{
scanf("%d",&mat[i][j]);
}
printf("\nHere is your matrix:\n");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
printf("%d ",mat[i][j]);
}
printf("\n");
}
{
int i,j,sum=0,a[4][4], first_sum=0, second_sum=0;
printf("\nThe sum of all the elements is: %d", sum);
for(i=0;i<4;i++)
{
first_sum=first_sum+a[i][i];
}
printf("\nThe sum of first diagonal is: %d", first_sum);
for(i=0;i<4;i++)
{
second_sum=second_sum+a[i][4-i-1];
}
printf("\nThe sum of second diagonal is: %d", second_sum);
return 0;
}
}
