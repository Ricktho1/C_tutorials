#include<stdio.h>
int main(){
    printf("Enter 2 numbers");
    int a,b;
    scanf("%d\n%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swaped value of first and second number is %d and %d",a,b);
    return 0;
    /*
    
        a = 10
        b = 20

        a = a+b
        b = a - b
        a = a - b
    
    */
}