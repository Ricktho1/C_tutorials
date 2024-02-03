#include<stdio.h>
//sum of first n natural numbers 
// and print them in reverse
int main()
{
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=n; i>=1;i--)
    { 
        sum= sum+i;
        printf("%d \n",i);
    }
    printf("Sum of first %d natural numbers: %d", n,sum);
    return 0;
}