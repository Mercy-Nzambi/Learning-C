#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myAge = 21;
    int* ptr = &myAge; //creating a pointer variable can also be int *ptr

    printf("My age is: %d\n", myAge);
    printf("The pointer of my age contains %p which is the memory address of my age.\n", ptr);

    //next is dereferencing
    printf("The value of my age is: %d", *ptr);
}
