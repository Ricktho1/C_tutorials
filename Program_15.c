#include<stdio.h>
//Factorial of a number
int main(){
    int n,fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
}