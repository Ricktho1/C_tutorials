#include<stdio.h>
//To check if character enetered is upper case or not
int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c" , &character);
    if(character>='A'&&character<='Z')
    {printf("Character is in Upper Case");}
    //A=65 and Z=90
    //a=97 and z=122 ;ASCII value
    else if(character>='a'&& character<='z')
    {printf("Character is in Lower Case");}
    else
    {printf("Character is not an alphabet");}
    return 0;
}