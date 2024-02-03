//greatest of three numbers
#include<stdio.h>
int main(){
    printf("Enter 3 numbers");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("The greatest number is %d",a);
    }
    else if(b>c&&b>a)
    {
        printf("The greatest number is %d",b);
    }
    else
    {
        printf("The greatest number is %d",c);
    }
    return 0;
}