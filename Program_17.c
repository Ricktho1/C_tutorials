#include<stdio.h>
//Factorial of n
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factNm1=factorial(n-1);
    int factN=factNm1*n;
    return factN;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, factorial(n));
    return 0;
}