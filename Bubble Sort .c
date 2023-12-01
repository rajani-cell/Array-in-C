//Bubble Sort.
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
  
  int temp;
  
  for(int i=0;i<size-1;i++)
  {
      for(int j=0;j<size-1-i;j++)
      {
          int temp=arr[j];
         if(temp>arr[j+1]) 
         { 
             
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
             
         }
          
          for(int k=0;k<size;k++) 
          {
              printf("%d ",arr[k]);
          }
          printf("\n");
      }
      printf("\n\n");
  }
  
  printf("\n\nSorted array :\n");
   for(int i=0;i<size;i++) 
          {
              printf("%d ",arr[i]);
          }
  
      return 0;
}
