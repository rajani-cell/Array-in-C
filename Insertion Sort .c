//Insertion Sort.
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
  

  
  for(int i=1;i<size;i++)
 {
     int j=i-1;
     int temp=arr[i];
     while(j>=0 && arr[j]>temp)
     {
      arr[j+1]=arr[j];
      j--;
       
     }
     
     arr[j+1]=temp;
     
 }
     
   
  
  printf("\n\nSorted array :\n");
   for(int i=0;i<size;i++) 
          {
              printf("%d ",arr[i]);
          }
  
      return 0;
}
