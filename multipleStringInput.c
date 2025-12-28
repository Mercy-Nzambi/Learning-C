#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fullName[30];
    printf("Enter your first and last name: \n");
    //using fgets we can enter a string with spaces
    fgets(fullName, sizeof(fullName), stdin);
    printf("Hello %s\n", fullName);
}
