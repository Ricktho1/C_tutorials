#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int i,rev=0;
    while(n>0)
    {
        int r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("Reverse of number is: %d",rev);
    return 0;
}