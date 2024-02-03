#include<stdio.h>
int main(){
    printf("Enter the len and n");
    int len,n;
    scanf("%d %d",&len,&n);
    for(int i=1;i<=n*len;i=i+len){
        if(i%2!=0){
            for(int j=len;j>=1;j++){
                for(int k=j;k<=len;k++){
                    if(j>k)
                    printf("*");
                    else
                    printf(" ");
                }
                printf("\n");
            }
        }
        else{
            for(int j=1;j>=len;j++){
                for(int j=1;j<=len;j++){
                printf(" ");
            }
                for(int k=len;k<=len;k++){
                    printf("*");
                }
                printf("\n");
            }
        }
    }
    return 0;
}