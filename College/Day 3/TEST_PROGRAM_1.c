//REVERSE A GIVEN NUMBER
#include<stdio.h>
int main(){
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int rev=0;
    while(n>0){
        int r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("Reverse of number is %d",rev);
    return 0;
}