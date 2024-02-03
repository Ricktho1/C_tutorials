#include<stdio.h>
int main(){
    printf("Enter characters. To stop press N or n\n");
    char c;
    while(1)
    {
        scanf("%c",&c);
        if((c=='N') || (c=='n')){            
          break;
        }
        else{
             printf("The character entered is %c\n",c);
        }
    }
    printf("You have pressed %c",c);
    return 0;
}