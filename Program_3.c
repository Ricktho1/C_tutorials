#include<stdio.h>
//To check a number is divisible by 2 or not
//Divisible or even--->1
//Not Divisible or odd--->0
int main(){
    int a ;
    printf("Enter a number: ");
    scanf ("%d", &a);
    printf("%d", a%2==0);
    return 0; 
}