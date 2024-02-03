#include<stdio.h>
int *fun()
{
    int x = 5;
    return &x;
}

int main()
{
    /*int *ptr = fun ();
    printf ("%d", *ptr);//dangling pointer
    */
    //pointer to constant
    int a=100;
    int b=56;
    const int *ptr2=&a;
    printf("value of pointer is %d\n",*ptr2);
    printf("Address stored in pointer is %d\n",ptr2);
    //*ptr2=78;
    ptr2=&b;
    printf("Value of pointer is %d\n",*ptr2);
    printf("Address stored in pointer is %d\n",ptr2);
    //Constant pointer
    int* const ptr3=&a;
    printf("Value of pointer is %d\n",*ptr3);
    printf("Address stored in pointer is %d\n",ptr3);
    *ptr3=56;
    printf("Value of pointer is %d\n",*ptr3);
    printf("Address stored in pointer is %d\n",ptr3);
    return 0;
}