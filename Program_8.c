#include<stdio.h>
//print numbers from 0 to n, n given by user
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i=0;
    while(i<=n){
        printf("%d\n", i);
        i++;
    }
}
