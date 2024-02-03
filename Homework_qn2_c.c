#include<stdio.h>
//To print the smallest number of the two
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a<=b)
    {printf("Smallest number is= %d", a);}
    else
    {printf("Smallest number is= %d", b);}
    return 0;
}