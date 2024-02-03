#include<stdio.h>
//Print nth number of fibonacci sequence
int fib(int n)
{
    if(n==0){
    return 0;}
    if (n==1){
    return 1; }
    int fibN=fib(n-1)+fib(n-2);
    return fibN;
}
int main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    //by making function
    /*printf("%dth term of fibonacci series is: %d",n,fib(n));*/
    //by array
    /*  int fib[n];
        fib[0]=1; fib[1]=0;
        for(int i=2;i<n;i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
            printf("%d\n", fib[i]);
        }
    */
    //by loop
    int j,first=0,second=1;
    for( int i=0;i<=n;i++)
    {
        if(i<=1)
            j=i;
        else
        {
            j=first+second;
            first=second;
            second=j;
        }
    }
    printf("%dth term of the fibonacci series is %d",n,j);    
    return 0;
}