# DSCL-PRACS-1

The basic type in C includes types like int, float, char, etc. Inorder to input or output the specific type, the X in the syntax is changed with the specific format specifier of that type.
In C programming language, scanf is a function that stands for Scan Formatted String. It reads data from stdin (standard input stream i.e. usually keyboard) and then writes the result into the given arguments.

It accepts character, string, and numeric data from the user using standard input.
Scanf also uses format specifiers like printf.
%d to accept input of integers.
%ld to  accept input of long integers
%lld to accept input of long long integers
%f to accept input of real number.
%c to accept input of character types.
%s to accept input of a string.

#include <stdio.h>
 int main(){
    int inputInteger;
    char inputCharacter;
    float inputFloat;  
    /* Take input from user using scanf function */
    printf("Enter Integer,Character and Float number\n");
    scanf("%d %c %f", &inputInteger, &inputCharacter,
        &inputFloat);
    printf("\nInteger you entered is : %d", inputInteger);
    printf("\nCharacter you entered is : %c", inputCharacter);
    printf("\nFloating point number you entered is : %f",
        inputFloat);
     return 0;
}

<img width="369" alt="Screenshot 2023-04-06 235633" src="https://user-images.githubusercontent.com/124857385/230707445-8dbd0bb8-d1b7-458b-83f6-eae562ce181b.png">
