//*Array Sum*: Write a program to find the sum of all elements in an array.
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

printf("\nSum of all element in array : %d\n",sum);



  return 0;
}
