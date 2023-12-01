//*Array Rotation*: Write a program that rotates the elements of an array to the right by a specified number of positions.
#include<stdio.h>

void rotedarray(int arr[],int size,int position)
{

position=position%size;
int temp;
for(int i=0;i<position;i++)
{
   temp=arr[size-1];

   for(int j=size-1;j>0;j--)
   {

     arr[j]=arr[j-1];

   }

arr[0]=temp;
}


}


int main()
{
  int arr[]={1,2,3,4,5,6};
  int size=sizeof(arr)/sizeof(arr[0]);
  int position=3;
   

printf("Orginal array=\n");
 for(int j=0;j<size;j++)
{
    printf("%d ",arr[j]);
}

rotedarray(arr,size,position);

printf("\nRotatade array=\n");
 for(int j=0;j<size;j++)
{
    printf("%d ",arr[j]);
}
