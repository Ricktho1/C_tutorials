#include<stdio.h>
//calculate perimeter
int main(){
    float length,breadth;
    printf("Enter length:");
    scanf("%f" , &length);
    printf("Enter breath:");
    scanf("%f" , &breadth);
    printf("Area of rectangle= %f", length*breadth);
    return 0;
}