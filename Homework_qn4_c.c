#include<stdio.h>
//Print prime numbers in a range
int main(){
    int n,j,c=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers in the range 1 to %d are",n);
    for (int i=1; i<=n ;i++)
    {
        for( j=1; j<=i-1;j++)
        {
            if (i%j==0)
            c++;
        }
        if(c<=1)
        {printf(" %d ", i);}
        c=0;
    }
    return 0;
}