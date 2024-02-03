#include<stdio.h>
//input user's name and print its length
int main(){
    char name[100];
    int c=0;
    printf("Enter ur first name: ");
    fgets(name,100,stdin);
    for(int i=0;name[i]!='\0';i++)
    {
        c++;
    }
    printf("Length= %d", c-1);
    return 0;
}