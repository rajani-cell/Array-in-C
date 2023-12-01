//Array insertion.
#include <stdio.h>

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
    
    int insert_value,insertposition;
     printf("Enter insert value :");
    scanf("%d",&insert_value);
    
    printf("Enter the insert value index :");
    scanf("%d",&insertposition);
     
          for(int i=size;i>=insertposition;i--)
             {
                arr[i]=arr[i-1];
        
             }
        arr[insertposition]=insert_value;
     
  
    
    printf("insetional array :\n");
    for(int i=0;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}
