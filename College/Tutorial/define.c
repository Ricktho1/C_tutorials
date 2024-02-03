#include<stdio.h>
#define greater(x,y)  if(x>y)\
                        printf("%d id greater than %d",x,y);\
                    else \
                        printf("%d is lesser than %d",x,y);
int main(){
    greater(3,4);
    return 0;
}