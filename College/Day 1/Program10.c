#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter a number");
    int a;
    scanf("%d",&a);
    printf("The cube of number %d is %d .",a, pow(a,100));
    return 0;
}