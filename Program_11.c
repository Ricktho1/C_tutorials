#include<stdio.h>
/*keep taking numbers from user until user 
enters odd number*/
int main(){
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if(n % 2 != 0)
        {break;}
    } while (1);    
    printf("You have entered an odd number");
    return 0;
}