#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    //open our existing file using read mode
    fptr = fopen("LearningC.txt", "r");

    //define an array variable to store what we want to read
    char myString[100];

    //use fgets to get our content from the file as it allows for multiple line content
    fgets(myString, 100, fptr);
    printf("%s\n", myString);

    //using a while loop to get all other sentences in the file
    while(fgets(myString, 100, fptr))
    {
        printf("%s\n", myString);
    }

    fclose(fptr);

    return 0;
}
