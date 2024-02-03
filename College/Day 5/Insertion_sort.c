#include <stdio.h>
#include <string.h>

void InsertionSort(char str[]){
    int n=strlen(str);
    for(int i=1;i<n;i++){
        int curr=str[i];
        int prev=i-1;
        while(prev>=0&&str[prev]>curr)
        {
            str[prev+1]=str[prev];
            prev--;
        }
        str[prev+1]=curr;
    }
    printf("%s",str);
}

int main()
{
    int index;
    char strings[20];

    /* Get input */
    printf("Enter the string:");
    fgets(strings,20,stdin);

    InsertionSort(strings);
    return 0;
}

