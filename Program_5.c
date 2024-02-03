#include<stdio.h>
/* To give grades to students
marks<30--->C
30<=marks<70--->B
70<=marks<=90--->A
90<=marks<=100--->A+
*/
int main(){
    int marks;
    printf("Enter marks(0-100): ");
    scanf("%d", &marks);
    if(marks<30)
    printf("Your Grade is C");
    else if(marks<70 && marks>=30)
    printf("Your Grade is B");
    else if(marks<90 && marks>=70)
    printf("Your Grade is A");
    else if(marks<=100 && marks>=90)
    printf("Your Grade is A++");
    else
    printf("Invalid entry");
    return 0;
}