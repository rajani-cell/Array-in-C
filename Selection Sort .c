//Selection Sort.
#include<stdio.h>
int main()
{
  int size,arr[100];
  printf("Enter the size of array :");
  scanf("%d",&size);
  printf("Enter the elament of array :");
  for(int i=0;i<size;i++)
  {
  scanf("%d",&arr[i]);
  } 
  

  
  for(int i=0;i<size;i++)
 {
   int minindex=i;
   for(int j=i+1;j<size;j++)
   {
       
      
      if(arr[minindex]>arr[j]) 
      {
          minindex=j;
      }
   }
   int temp=arr[minindex];
   arr[minindex]=arr[i];
   arr[i]=temp;
  
     
 }
     
   
