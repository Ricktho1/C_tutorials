#include<stdio.h>
#include<string.h>
//salting of password by adding 123 at the end
void salting(char password[])
{
    char salt[]="123";
    char newPass[200];
    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}
int main()
{
    char str[100];
    printf("Enter your password:");
    scanf("%s",str);
    salting(str);
    return 0;
}