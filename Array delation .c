//Array delation.
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
    
    int deleteposition;
    
    printf("Enter the delete value index :");
    scanf("%d",&deleteposition);
     
          for(int i=deleteposition;i<size;i++)
             {
                arr[i]=arr[i+1];
        
             }
      size--;
     
  
    
    printf("Deletion in array :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}
