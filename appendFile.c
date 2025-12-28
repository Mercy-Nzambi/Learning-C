#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    //open an existing file with the append mode to add more details to the file
    fptr = fopen("LearningC.txt", "a");
    fprintf(fptr, "\nCoding makes me happy.");
    fclose(fptr);

}
