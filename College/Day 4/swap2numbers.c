#include<stdio.h>
void swap(int *num1, int *num2) {
    int temp;
   temp = *num1;
   *num1 = *num2;
   *num2 = temp;
}
int main()
{
    printf("Enter 2 numbers\n");
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("Swapped Value of a and b is %d and %d respectively.",a,b);
    return 0;
}