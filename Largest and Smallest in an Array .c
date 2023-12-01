//*Largest and Smallest in an Array*: Develop a program that finds the largest and smallest elements in an array.
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

int max=arr[0];
for(int i=0;i<size;i++)
{
  if(max<arr[i])
  {
    max=arr[i];
  }

}

printf("Largest element = %d\n",max);

int min=arr[0];
for(int i=0;i<size;i++)
{
  if(min>arr[i])
  {
    min=arr[i];
  }

}

printf("Smaller element = %d\n",min);




  return 0;
}
