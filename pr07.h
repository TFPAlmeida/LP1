//
// Created by tiago on 12/11/2021.
//

#ifndef LP1_PR07_H
#define LP1_PR07_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef MAX100
#define MAX100 100
#endif

int main_pr07(int argv, char *argc[]);

/**
* Allocates memory for an array of integers (with malloc) and sets memory with given value.
* @param n - number of positions to be allocated
* @return pointer to the allocated memory
*/
int* alloc_and_setvalue_dyn_int_array(int n);

/**
* Allocates memory for an array of integers, initializing all elements to zero (with calloc).
* @param n - number of positions to be allocated
* @return pointer to the allocated memory
*/
int* alloc_and_init_dyn_int_array(int n);

/**
* Creates or resizes a dynamic int array (with realloc).
* if pints is NULL, create and init new dyn int array
* else returns an array with newsize, initializing the empty positions to zero
* @param pints - array to create or resize
* @param size - current array size (Filled positions)
* @param newsize - new array size
* @return array with the same content of pints, but with newsize
*/
int* create_or_resize_dyn_int_array(int *pints, int size, int newsize);

/**
* Clones and trims the content of a static str into a new dynamic array.
* @param str - static string
* @return trimed string
* i.e. input: char * with 8 elements ((a, b, c, \0, 0, 0, 0, 0)); output: char * with 4 elements (a, b, c, \0)
*/
char* create_copy_dyn_string(char * str);

/**
* Prints a dynamic array of strings using ** notation.
* @param astr - static (and empty) array of strings
* @param size - size of astr
* @return filled astr
*/
void print_array_dyn_strings(char **ast, int size);

char ** alloc_and_setvalue_dyn_array_string(int size);

int **alloc_and_setvalue_dyn_array_int(int size);

/**
* Fills an array of strings with dynamic stdin retreived strings.
* The previous create_copy_dyn_string() function should be used to trim the stdin read string
* @param astr - static (and empty) array of strings
* @param size - size of astr
* @return filled astr
*/
char* read_array_dyn_strings(char **ast, int size);

/**
* Creates or resizes a dynamic int array (with realloc).
* if pints is NULL, create and init new dyn int array;
* else returns an array with newsize, initializing the empty positions to zero.
* @param pints - array to create or resize
* @param size - current array size (Filled positions)
* @param newsize - new array size
*/
int** create_or_resize_dyn_int_array2(int **pints, int size, int newsize);

int** read_array_dyn_array_ints(int **pints, int size);
void print_array_dyn_array_ints(int **pints, int size);

/**
* Splits a string by a user-defined delimiter. The result should be stored in a dynamically alocated char**.
* @param string - input string
* @param delimitr - boundary string
* @param n_strings - number of strings in the resulting array
* @return pointer to the first position of the resulting array
* of strings.
*/
char** explode_string_dyn_array (char * string, char delimiter, int n_strings);

#endif //LP1_PR07_H
