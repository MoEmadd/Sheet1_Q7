#include <stdio.h>
void iseven(int x[],int );
int main()
{
    int x;
    printf("Enter the number of array elements : ");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++)
    {
      printf("arr[%d] : ",i);
      scanf("%d",&arr[i]);
    }
    iseven(arr,x);
    return 0;
}
void iseven(int x[],int p)
{
    for(int i=0;i<p;i++)
    {
      if(x[i]%2==0)
        printf("True %d is even \n",x[i]);
      else
        printf("False %d is odd \n",x[i]);
    }
}
