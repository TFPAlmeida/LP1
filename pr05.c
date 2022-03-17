//
// Created by tiago on 22/10/2021.
//

#include "pr05.h"

#define MAXCOLS100 100

#include <math.h>

int main_pr05(int argv, char *argc[]) {
    /* int lines = 10;
     int columns = 10;
     int m[MAXCOLS100][MAXCOLS100];
     int pr[];
     int ps[];*/
    int x = 10;
    int y = 20;
    int a = 2, b = -14, c = 20;
    double r1, r2;
    double pi[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(pi) / sizeof(double);
    int pos1= pi[0],pos2= pi[1];

    //find_prime_numbers_matrix (m, lines, columns, pr, ps);
    swap_pxy(&x, &y);
    printf("%d-%d\n", x, y);
    calc_roots(a, b, c, &r1, &r2);
    printf("%.2f-%.2f\n", r1, r2);

    print_array_double_with_index(pi, size);
    swap_double_array_ptr(pi, pos1, pos2);
    print_array_double_without_index(pi, size);
    for (int i = 0; i < size; i++) {
        printf("%.0f ",  pi[i]);
    }
    return 0;
}

void swap_pxy(int *px, int *py) {

    int aux = 0;
    aux = *px;
    *px = *py;
    *py = aux;

}

void calc_roots(int a, int b, int c, double *r1, double *r2) {

    *r1 = ((-b) + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    *r2 = ((-b) - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

}

void print_array_double_with_index(double *pi, int size) {
    printf("%d\n", size);
    for (int i = 0; i < size; i++) {
        printf("%.0f ", *(pi + i));
    }
}

void print_array_double_without_index(double *pi, int size){

}

double* swap_double_array_ptr(double* pi, int pos1, int pos2){

    int aux[2];

    aux[0]=*(pi+2);
    aux[1]=*(pi+3);
    *(pi)=aux[0];
    *(pi+1)= aux[1];
    *(pi+2)= pos1;
    *(pi+3)= pos2;
    printf("\n");
    return pi;
}