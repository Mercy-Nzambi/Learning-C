#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    //creating the file and assigning a mode of 'w' to write in the file
    fptr = fopen("learningC.txt", "w");

    //writing something in the file we created
    fprintf(fptr, "Learning C is fun!");
    fclose(fptr);

    return 0;
}
