#include<stdio.h>
//check prime
int main(){
    int n,c=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=1;i<=n-1;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c>1)
   { printf("Not a prime number");}
    else
    {printf("Prime number");}
    return 0;
}