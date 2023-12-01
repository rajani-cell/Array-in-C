////*Array Search*: Create a program that searches for a specific element in an array and returns its position or whether it's present.
#include<stdio.h>
int main()
{
  int size,arr[100];
  printf("Enter the size of array :");
  scanf("%d",&size);
  printf("Enter the sorted elament of array :");
  for(int i=0;i<size;i++)
  {
  scanf("%d",&arr[i]);
  } 
  
  int search_value;
  printf("Enter search value :");
  scanf("%d",&search_value);
  
  int l=0;
  int n=size-1;
  int mid;
  
  while(l<=n)
  {
   mid=(l+n)/2;
   if(search_value==arr[mid])
   {
       printf("Index Position of search value = %d",mid+1);
       return 0;
   }
      
    else if(search_value>arr[mid])  
    {
        l=mid+1;
    }
    else
    {
        n=mid-1;
    }
      
  }
      return 0;
}
