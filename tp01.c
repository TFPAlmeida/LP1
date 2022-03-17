//
// Created by Tiago on 20/09/2021.
//

#include <stdio.h>
#include "tp01.h"
#include <limits.h>
#include <float.h>
#include <math.h>
#include <ctype.h>

/* not compiled
 *
 * # include
 * # define
 *
 * !=0 - true
 * ==0 - false
 *
 *  Data Types - definem a estrutura e o tamanho dos dados;
 *                              integer - char/short/int/long
 *                              Floating Point - float/double
 *                              int bytes = sizeof(char); - 1 Byte
 *                              int bits = 8 * bytes;
 *                              double max = pow(2, double(bits-1));
 *                              double min = -1 * max;
 *
 *  Operators - Arithemetic   ++x- soma e imprime / x++ -imprime e soma
 *              Relational
 *              Assigment
 *              Logical
 *              Reference
 *
 *  Flow Control - if/else/for/switch/while/do
*/

int main_tp01() {
    char c = 100;
    //printPrimitiveDataTypesSizeLimits();
    //checkIfLetter(c);
    guessSecretLetter();

    return 0;
}

void printPrimitiveDataTypesSizeLimits(){
    int bytes = sizeof(int);
    int bits = 8 * bytes;
    double max = pow(2, bits-1);
    double min = -1 * max;

    printf(" Char: Bytes = %d | Bits = %d | Min = %0.0f | Max = %0.0f\n",bytes,bits,min,max-1);
    printf(" Min - %d, Max - %d", LONG_MIN, LONG_MAX);
}

int checkIfLetter(char c){ //'a'-'z'

    if (isalpha(c)) {
        puts("\n it's a letter");
    } else if (isdigit(c)) {
        puts("\n it's a digit");
    } else {
        puts("\n something else?");
    }
}

void guessSecretLetter(){ //game

    char x = '\0',y = '\0';

    while (x != '.'){
        scanf(" %c", &x);
        scanf(" %c", &y);

        if(x==y){
            puts("win");
        } else{
            puts("lost");
        }
    }

}

