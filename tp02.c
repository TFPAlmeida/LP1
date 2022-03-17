//
// Created by tiago on 27/09/2021.
//

#include "tp02.h"
#include <stdio.h>
#include <ctype.h>

int main_tp02(int argc, char *argv[]) {

    char c = 't';
    int n;
    printf("char %c is digit = %d", c, isdigit(c));
    isDigit(c);
    isVowel(c);
    isConsoante(c);
    isWhite(c);
    printVeyType(c);
    //readVeysPressedPrintDigits();
    readVeysPressedPrintVeyType();
    numberOfDigitIterative(n);

        return 0;
}

int isDigit(char c) {

    if (isdigit(c) || (c >= '0' && c <= '9')) {
        return 1;
    } else {
        return 0;
    }
    // return (c >= '0' && c <= '9'); // outra solução
}

int isVowel(char c) {

    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    } else {
        return 0;
    }
}

int isConsoante(char c) {

    if (!isVowel(c) && (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }

    // !isVowel(c) - nao é vogal
    // fazer com switch
}

int isWhite(char c) {

    if (c == ' ' || c == '\n' || c == '\t' || c == '\r') {
        return 1;
    } else {
        return 0;
    }
}

void printVeyType(char c) {

    if (isVowel(c)) {
        puts("\nis vowel!");
    } else if (isConsoante(c)) {
        puts("\nis consoante!");
    } else if (isDigit(c)) {
        puts("\nis digit!");
    } else if (isWhite(c)) {
        puts("\nis white!");
    }else{
        puts("is something else!");
    }

}

void readVeysPressedPrintDigits() {

    char c = '\0';

    while (c != '.') {
        scanf(" %c", &c);
        if (isDigit(c)) {
            printf("%c is digit!", c);
        } else {
            printf("%c isn't a digit!", c);
        }
    }
}

void readVeysPressedPrintVeyType() {

    char c = '\0';

    while (c != '.') {
        scanf(" %c", &c);
        printVeyType(c);
    }
}

int numberOfDigitIterative(int n){

}