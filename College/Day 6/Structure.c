#include<stdio.h>
struct Customer{
    char name[100];
    int num_of_purchases;
    int prices[100];
    int age;
};
int main(){
    printf("Enter number of customers\n");
    int N;
    scanf("%d",&N);
    struct Customer s[N];
    for(int i=0;i<N;i++){
        printf("Enter details of Customer %d\n",i+1);
        printf("Enter name: ");
        scanf("%s",&s[i].name);
        printf("Enter age: ");
        scanf("%d",&s[i].age);
        printf("Enter number of purchases made: ");
        scanf("%d",&s[i].num_of_purchases);
        printf("Enter the prices of the purchases\n");
        for(int j=0;j<s[i].num_of_purchases;j++){
            scanf("%d",&s[i].prices[j]);
        }
    }
    for(int i=0;i<N;i++){
        int sum=0;
        for(int j=0;j<s[i].num_of_purchases;j++){
            sum=sum+s[i].prices[j];
        }
        printf("Sum of purchases of %s is %d\n",s[i].name,sum);
    }
}