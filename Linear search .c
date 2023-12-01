//*Array Search*: Create a program that searches for a specific element in an array and returns its position or whether it's present.
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
  
  int search_value;
  printf("Enter search value :");
  scanf("%d",&search_value);
  
  int position=-1;
  
  for(int i=0;i<size;i++)
  {
   
  if(search_value==arr[i])
  {
  position=i+1;
  }
  
  }
   
   
   if(position==-1) 
   {
       printf("Data not found");
   }
   
   else
   {
      printf("Positon of search value = %d",position);  
       
   }
      return 0;
}
