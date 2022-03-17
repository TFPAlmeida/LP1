//
// Created by tiago on 08/10/2021.
//

#include "pr03.h"

int main_pr03(int argc, const char *argv[]) {

    int b = 1, e = 3;
    int level = 7;
    int ints[] = {1, 2, 3, 4, 5,8,9};
    int size = sizeof(ints)/sizeof(int);
    //double res= powRecursive(b,e);
    //print_hangman_recursive(level);
    // printf("%f",res);

    printf("%d", sum(ints, size));
    return 0;
}

double powRecursive(int b, int e) {

    if (e == 0) {
        return 1;
    } else {
        return b * powRecursive(b, e - 1);
    }
}

void print_hangman_recursive(int level) {


    if (level == 0) {
        printf("      _____\n"
               "         |\n"
               "         |\n"
               "         |\n"
               "       __|___"
        );
    } else {
        print_hangman_recursive(level - 1);
        switch (level) {

            case 1:
                printf("\n      _____\n"
                       "     |    |\n"
                       "          |\n"
                       "          |\n"
                       "        __|___"
                );
                break;
            case 2:
                printf("\n      _____\n"
                       "     |    |\n"
                       "     O    |\n"
                       "          |\n"
                       "        __|___"
                );
                break;
            case 3:
                printf("\n    _____\n"
                       "     |    |\n"
                       "     O    |\n"
                       "    /     |\n"
                       "        __|___"
                );
                break;
            case 4:
                printf("\n     _____\n"
                       "     |    |\n"
                       "     O    |\n"
                       "    /|    |\n"
                       "        __|___"
                );
                break;
            case 5:
                printf("\n     _____\n"
                       "     |    |\n"
                       "     O    |\n"
                       "    /|\\   |\n"
                       "        __|___"
                );
                break;
            case 6:
                printf("\n     _____\n"
                       "     |    |\n"
                       "     O    |\n"
                       "    /|\\   |\n"
                       "    /   __|___"
                );
                break;
            case 7:
                printf("\n     _____\n"
                       "     |    |\n"
                       "     O    |\n"
                       "    /|\\   |\n"
                       "    / \\ __|___"
                );
                break;
            default:
                printf("Erro");
                break;
        }
    }

}

int sum(int ints[], int size) {

    int soma = 0;
    while ( size >= 0) {
        soma += ints[size--];
    }
    return soma;

}