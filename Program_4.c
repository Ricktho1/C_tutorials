#include<stdio.h>
/*To check a student passed aur failed
marks>30--->Pass
marks<=30--->Fail
*/
int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if(marks>30 && marks<=100)
    printf("Pass");
    else if ( marks>=0 && marks <=30)
    printf("Fail");
    else
    printf("Invalid marks");
    //marks<=30 ?printf("Fail"):printf("Pass");
    return 0;
}