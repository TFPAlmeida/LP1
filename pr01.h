//
// Created by tiago on 24/09/2021.
//

#ifndef LP1_PR01_H
#define LP1_PR01_H

int main_pr01();

/**
* Reads from stdin a birthdate and gender and prints
* a formatted string to the stdout
* i.e. Input: "5 2 1990 male"; output: "The inserted date is | 5/2/1990 | and the gender is: | m |"
*/
void readDateGender(void);

/**
* print the ascii value of a given character
* output -> readCharPrintAscii('a') : 97
* @param c - char to be converted
*/
void readCharPrintAscii(char c);

/**
* division of two integer values
* output -> readIntsDivisionFloat(10, 3) : 3.33
* @param a - dividend
* @param b - divisor
* @return - (float) a / b
*/
float readIntsDivisionFloat(int a, int b);

/**
* iteratively checks if a user input char is a digit
* output: '0' is a digit; 'a' is not a digit
*/
void printDigitOrNot(void);

/**
* counts how many times a given char appears in a
* series of chars iteratively entered by the user
* @param charToCount - char to count
* @return - number of occurrences
*/
int countInsertedChar();

/**
* Finds the logest word in a series of
* chars iteratively entered by the user
* i.e. input: "ab ccc dededede f"; output: "The longest word has 8 characters\n"
* i.e. input: "aa 123 ababa23"; output: "The longest word has 7 characters"
* i.e. input: "a b c d e"; output: "The longest word has 1 characters"
*/
void findLongestWord(void);

/**
* Finds the greatest sequence of repeated chars in a
* series of chars iteratively entered by the user
* i.e. input: "abcccdedededef"; output: "The character c appeard consecutively 3 times\n"
* i.e. input: "abcdef"; output: "The character a appeard consecutively 1 times\n"
* i.e. input: "abdddccdddefffff"; output: "The character f appeard consecutively 5 times\n"
*/
void findGreatestSequenceRepeatedChars(void);



#endif //LP1_PR01_H
