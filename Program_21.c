#include<stdio.h>
//reverse an array
void reverse(int *arr,int n)
{
    for (int i=0;i<n/2;i++)
    {
        int firstval=arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval;
    }
}//call by reference czz array is a pointer
int main()
{
    int arr[5]={1,2,3,4,5};
    reverse(arr,5); 
    for(int i=0;i<=5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}