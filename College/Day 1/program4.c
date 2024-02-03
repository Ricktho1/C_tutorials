#include<stdio.h>
int main(){
    printf("Enter 2 numbers");
    int a,b;
    scanf("%d\n%d",&a,&b);
    if(a>b)
    {
        printf("The quotient is %d", a/b);
        printf("The remainder is %d",a%b);
    }
    else
    {
        printf("The quotient is %d", b/a);
        printf("The remainder is %d",b%a);
    }
    return 0;
}