//*Array Average*: Create a program that calculates the average of elements in an array.
#include<stdio.h>
int main()
{

int arr[100],size;
printf("Enter the size of array :");
scanf("%d",&size);
printf("Enter the element of array :");
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}

int sum=0;
for(int i=0;i<size;i++)
{
sum=sum+arr[i];
}

float avarage;

avarage=(float)sum/size;

printf("\nAvarage of all element in array : %f\n",avarage);



  return 0;
}
