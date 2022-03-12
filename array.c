#include<stdio.h>
int main()
{
int size;
printf("Enter the value of arr size ");
scanf("%d",&size);
int arr [size];
for(int i=0;i<size;i++){
printf("Enter array value\t");
scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++){
printf("Value of array is %d \n",arr[i]);

}
return 0;
}
