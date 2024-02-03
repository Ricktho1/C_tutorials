#include<stdio.h>
void recursivefunc(int a,int i){
    if(a==0){
        return;
    }
    int j=i;
    while(j>0){
        j--;
        printf("* ");
    }
    printf("\n");
    a--;
    i++;
    recursivefunc(a,i);
}
int main(){
    printf("ENter row number");
    int n;
    scanf("%d",&n);
    recursivefunc(n,1);
    return 0;
}