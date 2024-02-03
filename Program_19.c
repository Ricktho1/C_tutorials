#include<stdio.h>
//Swap 2 numbers
//call by reference
void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("a= %d & b=%d\n",*a,*b);
}
int main(){
    int x=3,y=5;
    swap(&x,&y);
    printf("x=%d&y=%d \n",x,y);
    return 0;

}