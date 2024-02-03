#include<stdio.h>
#include<string.h>
//slicing of a string
void slice(char arr[],int n, int m)
{
    char newarr[100];int i,j=0;
    for ( i=n; i<=m ; i++, j++)
    {
        newarr[j]=arr[i];
    }
    newarr[j]='\0';
    puts(newarr); 
}
int main()
{
    char str[100];
    int a,b;
    printf("Enter a string: \n");
    fgets(str, 100, stdin);
    printf("Enter the starting index: \n");
    scanf("%d", &a);
    printf("Enter the ending index: \n");
    scanf("%d", &b);
    slice(str,a,b);
    return 0;

}