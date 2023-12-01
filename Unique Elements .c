//*Unique Elements*: Write a program that removes duplicate elements from an array, leaving only unique values.
#include <stdio.h>

int Unquelement(int arr[],int size)
{
   for(int i=0;i<size;i++) 
   {
     int isunque_element =1;
      for(int j=i+1;j<size;j++) 
      {
          if(arr[i]==arr[j])
          {
           isunque_element =0;
           break;
              
          }
          
          
      }
       
       if(isunque_element)
       {
           printf("%d ",arr[i]);
       }
       
       
       
   }
    
    
    
    
}



int main()
{
    int size,arr[100];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the element of array :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    Unquelement(arr,size);
    
    
    return 0;
}
