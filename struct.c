#include <stdio.h>
#include <stdlib.h>


struct myStructure
{
    char myChar;
    int myInt;
    char myString[30]; //a string array
};


int main()
{
    struct myStructure s1;

    s1.myChar = 'M';
    s1.myInt = 7;

    strcpy(s1.myString, "Seeing progress");

    printf("My character is: %c\n", s1.myChar);
    printf("My number is: %d\n", s1.myInt);
    printf("My string says: %s\n", s1.myString);

    struct myStructure s2 = {'d', 8, "With practice"};
    printf("My character is: %c\nMy number is: %d\nMy string says: %s", s2.myChar, s2.myInt, s2.myString);

    return 0;
}
