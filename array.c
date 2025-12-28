#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNumbers[4] = {25, 49, 80, 57};
    int *ptr = myNumbers; //pointer to myNumber array or the first element in the array

    printf("The memory address of the integers in the array: \n");
    for(int i=0; i<4; i++)
    {
        printf("%d\n", &myNumbers[i]);//printing the memory address of each element.
    }
    //dereferencing in an array
    printf("The first element in the array is: %d\n", *myNumbers);

    //printing out the elements in the array using a pointer
    printf("Numbers in the array are:\n");
    for(int i=0; i<4; i++)
    {

        printf("%d\n", *(ptr + i));
    }
}
