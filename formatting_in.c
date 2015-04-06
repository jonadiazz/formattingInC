#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592653589793238462643383279502884197169399375100L

/*FORMATTING INPUT AND OUTPUT IN C*/
int main(void) {
   int nonP = 23;
   int *pointnonP = &nonP;
   printf("\nPrint using pointer to int nonPointer: %*d\n", 11, *pointnonP);
   /*format specifier %*d, asterisk indicates spaces indented to the right*/
   printf("With leading zeros: %*.4d\n", 30, *pointnonP);

   printf("\nNow, print PI with pointer value \nover four (%d) as amount of decimal digits: %*.*Lf\n\n", *pointnonP/4, 5, *pointnonP/4, PI);

}



