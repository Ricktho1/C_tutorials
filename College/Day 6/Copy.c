#include<stdio.h>
int main(){
    FILE *file1;
    file1=fopen("File1.txt","r");
    FILE *file2;
    file2=fopen("File2.txt","w");
    char c=fgetc(file1);
    while(c!=EOF){
        fprintf(file2,"%c",c);
        c=fgetc(file1);
    }
    fclose(file1);
    fclose(file2);
}