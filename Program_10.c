#include<stdio.h>
// print table of a number input by user
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for( int i=1;i<=10;i++)
    {
        printf("%d*%d=%d \n",n,i,n*i);
    }
    return 0;
}