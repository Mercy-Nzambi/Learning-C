#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char *units[] = {"Systems Programming\n", "Mobile Applications\n", "Artificial Intelligence\n"};

    fptr = fopen("file2.txt","w");

    for(int i = 0; i < strlen(units); i++)
    {
        fputs(units[i], fptr);
    }

    fclose(fptr);
}
