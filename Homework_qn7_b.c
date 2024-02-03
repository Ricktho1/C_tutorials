#include<stdio.h>
//print the largest number in an array
int main(){
    int i,arr[5],j,largest;
    printf("Enter 5 numbers: ");
    for( i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for( i=1;i<=4;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    printf("Largest of the 5 numbers is: %d", largest);
    return 0;
}