#include<stdio.h>
//Check if a given character is digit or not
int main(){
    char a;
    printf("Enter a character: ");
    scanf("%c" , &a);
    printf("%d" ,a>='0'&&a<='9');
    return 0;
}