/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
