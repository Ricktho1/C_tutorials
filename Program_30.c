#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Text.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("Character=%c", ch);
    fprintf(fptr, "%c", 'M');
    return 0;
}