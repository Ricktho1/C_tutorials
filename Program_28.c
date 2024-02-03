#include<stdio.h>
//sum of 2 vectors
typedef struct sum_of_vectors
{
    int x,y;
}sov;
void calcSum(sov v1,sov v2,sov sum)
{
    sum.x=v1.x+v2.x;
    sum.y=v1.y + v2.y;
    printf("SUm of x is %d \n", sum.x);
    printf("Sum of y is %d \n", sum.y);
}
int main(){
    sov a;
    sov b;
    sov sum={0};
    printf("Enter x coordinate and y coordinate of vector: ");
    scanf("%d %d",&a.x, &a.y);
    printf("Enter x and y coordinate of secomd  vector");
    scanf("%d %d", &b.x, &b.y);
    calcSum(a,b,sum);
    return 0;

}