#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNum = 5;
    int *ptr = &myNum;
    int **ptr_two = &ptr;

    printf("The value of my number is %d\n and the memory address of my number is %p.\n",myNum, &myNum);
    printf("The value of the first pointer is: %p\n", ptr);
    printf("The value of the second pointer is: %p", ptr_two);//points to the memory address of the first pointer.
}
