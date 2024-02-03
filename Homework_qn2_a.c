#include<stdio.h>
//print the average of 3 numbers
int main()
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d" , &a,&b,&c);
    printf("Average of the 3 numbers is = %d" ,((a+b+c)/3));
    return 0;

}
