#include<stdio.h>
int main(){
    printf("Enter 2 numbers");
    int a,b;
    scanf("%d\n%d",&a,&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    return 0;
}