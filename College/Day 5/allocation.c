#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // Allocate initial block of memory
    int* ptr1 = (int*) malloc(sizeof(int));
    if (ptr1 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Increase size of allocated memory
    int* ptr2 = (int*) realloc(ptr1, 2 * sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Check if the addresses are the same
    if (ptr1 == ptr2) {
        printf("The addresses are the same.\n");
    } else {
        printf("The addresses are different.\n");
    }

    // Release memory
    free(ptr2);
    return 0;
}