#include<stdio.h>
//to find maximum number between 2 number with pointer
int max(int *a,int *b){
    if(*a>*b)
    return *a;
    else
    return *b;
}
int main(){
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d %d",&a ,&b);
    printf("Maximum of %d and %d is %d",a,b,max(&a,&b));
    return 0;
}