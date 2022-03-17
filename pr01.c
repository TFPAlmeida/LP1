//
// Created by tiago on 24/09/2021.
//

#include "pr01.h"
#include <stdio.h>
#include <ctype.h> // tem a ver com tipo de carateres inseridos
#include <string.h>

int main_pr01() {
    char c;
    int a, b;
    //readDateGender();
    //readCharPrintAscii(c);
    //readIntsDivisionFloat(a,b);
    //printDigitOrNot();
    //countInsertedChar();
    findLongestWord();
    //findGreatestSequenceRepeatedChars();

    return 0;
}

void readDateGender() {
    int d, m, a;
    char gender;

    scanf("%d", &d);
    scanf("%d", &m);
    scanf("%d", &a);
    fflush(stdin);
    scanf("%c", &gender);

    printf("The inserted date is | %d/%d/%d | and the gender is: | %c |", d, m, a, gender);


}

void readCharPrintAscii(char c) {

    scanf("%c", &c);
    printf("%d = %c", c, c);

}

float readIntsDivisionFloat(int a, int b) {
    float result;
    scanf("%d %d", &a, &b);
    //casting
    result = (float) a / b;

    printf("%f", result);


}

void printDigitOrNot(void) {
    //puts imprime uma string
    char c;
    scanf("%c", &c);
    if (isalpha(c)) {
        puts("\n it's a letter");
    } else if (isdigit(c)) {
        puts("\n it's a digit");
    } else {
        puts("\n something else?");
    }

}

/* printf("Enter a character: ");
 scanf("%c",&c);

 if (isdigit(c) == 0)
     printf("%c is not a digit.",c);
 else
     printf("%c is a digit.",c);

 */

int countInsertedChar() {

    char x = '\0', y = '\0';
    int count = 0;

    while (x != '.') {
        scanf(" %c", &x);

        if (x == y) {
            count++;
        }
        y = x;
    }

    printf("%d", count);
}

void findLongestWord(void) {

    char string[100] = "tiago almeida" ;

    int i, letters=0, longest = 0;

    for (i = 0; string[i] != '\0'; i++) {
       letters++;

        if(string[i] == ' '){

            if (letters > longest) {
                longest = letters;

            }
            letters = 0;

        }
    }

    printf("\n %d",longest);


}

void findGreatestSequenceRepeatedChars(void) {

    char x[10];
    int count = 1;
    scanf(" %s", &x);

    for (int i = 0; i < sizeof(x); i++) {
        while(x[i] != '\0'){
            if(x[i] == x[i+1]){
                count++;
            }else{
                count = 1;
            }
        }
    }


}
