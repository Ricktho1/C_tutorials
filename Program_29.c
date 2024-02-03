#include<stdio.h>
//Print complex number using arrow operator
struct complex{
    int real;
    int imaginary;
};
int main(){
    struct complex a;
    printf("Enter the real part of complex number: ");
    scanf("%d", &a.real);
    printf("Enter imaginary part of complex number ");
    scanf("%d", &a.imaginary);
    struct complex *ptr=&a;
    printf("%d+%di",ptr->real,ptr->imaginary);
    return 0;
}