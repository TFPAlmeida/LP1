//
// Created by tiago on 18/10/2021.
//

#include "tp05.h"
#define M100 100
/*
 * POINTERS
 * 1-Passagem po REF
 * 2-Gestao dinamica memoria-arrays dinamicos
 *                          -estruturas dinamicas
 * int x = 10;
 * int * pi = &pi; { int *pi; pi= &x; }
 * posso alterar valores fora da função (não tenho de fazer return);
 * &a[0]=a=pi
 * a[2]=*(p+2)
 * */


int main_tp05(int argc, const char * argv[]){

    int a[3] ={1,2,3};
    char str [M100] = "Ola ABC Mundo";
    char sub [M100] = "ABC";
    //printf("%d\n", a);
    //double_pxy( a);
    //printf("%d\n",a);
    print_array_ints_ptr(a,3);
    //del_substr(str, sub);
    //printf("%s",str);
    return 0;
}

void double_pxy(int* px){
    *px = *px * 2;
}

void print_array_ints_ptr(int *pi, int size){

    for (int i = 0; i < size; i++) {
        printf("aray[%d] = %d\n",i, *(pi+i));
    }

}

char* del_substr(char *pstr, char *psub){
int a = 0;
    for (int i = 0; *(pstr + i) != '\0'; i++){
        for ( a = 0; *(psub + a) != '\0'; a++){
            if(*(pstr+i) == *psub){  // if(*(pstr + i + a) == *(psub + a))  // penso que seja desta forma
                continue;
            }else{
                break;
            }
        }

        if(*(psub+a) == '\0'){
            for (int n = i; *(pstr + n) != '\0'; i++){
                *(pstr + n) = *(psub + (n + a));
            }
        }

    }


}
