//
// Created by tiago on 12/11/2021.
//

#include "pr07.h"


int main_pr07(int argv, char *argc[]) {

    //ex 1 e 2
    int n = 4;
    int *res;

    /*res = alloc_and_setvalue_dyn_int_array(n);
    res = alloc_and_init_dyn_int_array(n);
    for(int i = 0; i < n; i++){
        printf("%d ", *(res+i));
    }*/

    //ex3
    /*int size = 4, newsize = 8;
    int * pints = NULL;
    //pints = alloc_and_init_dyn_int_array(n);
    int *res2;

    res2 = create_or_resize_dyn_int_array(pints, size, newsize);
    for(int i = 0; i < newsize; i++){
        printf("%d ", *(res2+i));
    }*/

    //ex4
    /*char str [8] = "tiago";
    char *res3;
    res3 = create_copy_dyn_string(str);
    printf("%s",res3);*/

    //ex5 e ex6
    /*int size = 8;
    char **ast = (char**)alloc_and_setvalue_dyn_array_string(size); //conjunto de strings
    read_array_dyn_strings(ast, size);
    print_array_dyn_strings(ast, size);*/

    //ex7
    int size = 3;
    int newsize = 4;
    int **pints = (int **) alloc_and_setvalue_dyn_array_int(size);
    print_array_dyn_array_ints(pints, size);
    //read_array_dyn_array_ints(pints, size);
    printf("-------------------\n");
    pints = (int **)create_or_resize_dyn_int_array2(pints, size, newsize);
    print_array_dyn_array_ints(pints, newsize);

    //ex7
   /* char string[] = "Eu sou altamente . qualquer coisa";
    char delimiter = '.';
    int n_strings = 0;
    explode_string_dyn_array (string, delimiter, n_strings);*/


    return 0;
}


int *alloc_and_setvalue_dyn_int_array(int n) {

    int *p1;
    p1 = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf(" %d", p1 + i);
    }
    return p1;
}

int *alloc_and_init_dyn_int_array(int n) {

    int *p2;
    p2 = (int *) calloc(n, sizeof(int));
    return p2;
}

int *create_or_resize_dyn_int_array(int *pints, int size, int newsize) {

    if (pints == NULL) {
        pints = alloc_and_setvalue_dyn_int_array(size);
        return pints;
    } else {
        pints = (int *) realloc(pints, newsize * sizeof(int));
        return pints;
    }
}

char *create_copy_dyn_string(char *str) {

    char *str1;
    str1 = (char *) malloc(8 * sizeof(char));
    for (int i = 0; *(str + i) != '\0'; i++) {
        *(str1 + i) = *(str + i);
    }
    return str1;
}

char**alloc_and_setvalue_dyn_array_string(int size) {

    char **p2 = (char **) malloc(size * sizeof(char *));
    for (int x = 0; x < size; x++) {
        *(p2 + x) = (char *) malloc(size * sizeof(char *));
    }
    return p2;
}

char *read_array_dyn_strings(char **ast, int size) {

    for (int x = 0; x < size; x++) {
        scanf(" %s", *(ast + x));
    }
    return *ast;
}

void print_array_dyn_strings(char **ast, int size) {

    for (int x = 0; x < size; x++) {
        printf("%s\n", *(ast + x));
    }
}

int ** alloc_and_setvalue_dyn_array_int(int size) {

    int **p2 = (int **) calloc(size, sizeof(int *));
    for (int x = 0; x < size; x++) {
        *(p2 + x) = (int *) calloc(1, sizeof(int*));
    }
    return p2;
}

int** create_or_resize_dyn_int_array2(int **pints, int size, int newsize) {

    int **p3 = (int **) calloc(newsize, sizeof(int *));

    for (int x = 0; x < newsize; x++) {
        *(p3 + x) = (int *) calloc(newsize, sizeof(int));
    }
    
    for(int y = 0; y < size; y++){
        *(p3 + y) = *(pints + y);
    }

    return p3;
}

int **read_array_dyn_array_ints(int **pints, int size) {

    for (int l = 0; l < size; l++) {
        for (int c = 0; c < size; c++) {
            scanf("%d", (*(pints + l) + c));
        }
    }
    return pints;
}

void print_array_dyn_array_ints(int **pints, int size) {

    for (int l = 0; l < size; l++) {
        for (int c = 0; c < size; c++) {
            printf("%d,", *(*(pints + l) + c));
        }
        printf("\n");
    }
}


//não está a funcionar corretamente
/*char** explode_string_dyn_array (char * string, char delimiter, int n_strings){
    int size = 10;
    int i = 1, n = 0;
    while(*(string + n) != '\0'){
        if(*(string + n) == delimiter){
            i++;
        }
        n++;
    }
    n_strings = i;
    char **string1 = (char**)malloc(50 * sizeof(char*));
    for(int x = 0; x < n_strings; x++){
        *(string1 + x) = (char *) malloc(50 * sizeof(char));
    }
    n=0;
    for(int x = 0; x < n_strings; x++){
        while(*(string + n) != '\0'){
            *(*(string1 + x)+n) = *(string + n);
            if(*(string + n) == delimiter){
                n =n +1;
            }
            n++;
        }

    }
    for (int x = 0; x < n_strings; x++) {
        printf("%s\n", *(string1 + x));
    }

    return string1;
}*/
