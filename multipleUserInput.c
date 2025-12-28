#include <stdio.h>
#include <stdlib.h>

int main(){
    int myNum;
    char myChar;

    printf("Enter a number AND a character: \n");
    scanf("%d, %c",&myNum, &myChar);
    printf("Your number is %d and your character is %c.",myNum, myChar);
}
