#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char *myString = "This is a tutorial from TutorialsPoint.";
    int i;
    char ch;

    fptr = fopen("file1.txt", "w");
    printf("File created.\n");
    for(i = 0; i < strlen(myString); i++)
    {
        ch = myString[i];
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, fptr);
    }
    fclose(fptr);
    printf("File closed.");

    return 0;
}
