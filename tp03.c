//
// Created by tiago on 04/10/2021.
//

#include "tp03.h"


int main_tp03(int argc, char *argv[]) {

    int a = 5;
    int b = 3;
    int n = 10;
    int level = 3;
    int size = 5, sizev = 5, sizer =2;
    char vowels[size];
    int ints[size];
    int v[sizev],r[sizer];

    //int res = numberOfDigitsRecursive(a);
    //int res = multiply_recursive(a, b);
    //print_multable_recursive(n,level);
    //printf("%d",res);
    read_vowels(vowels,size);
    //print_vowels(vowels, size);
    //max(ints, size);
    //min(ints,size);
    //count_segments_repeated_ints(v, sizev,  r, sizer);

    printf("%d", read_vowels(vowels,size));

    return 0;
}

int numberOfDigitsRecursive(int a) {

    if (a >= 0 && a <= 9) {
        return 1;
    } else {
        return 1 + numberOfDigitsRecursive(a / 10);
    }

}

double multiply_recursive(int a, int b) {

    if (a == 0 || b == 0) {
        return 0;
    } else if (a == 1) {
        return b;
    } else if (b == 1) {
        return a;
    } else {
        if (a > b) {
            return a + multiply_recursive(a, b - 1);
        } else {
            return b + multiply_recursive(a-1, b );
        }
    }

}

void print_multable_recursive(int n, int level){

    if(level == 0){
        printf("\n %d * %d = %d",n,0,n*0);
    } else{
        print_multable_recursive(n,level-1);
        printf("\n %d * %d = %d",n,level,n*level);// está á espera do level 1
    }

}
//nome do array &vowels[0] = vowels

int read_vowels(char vowels[], int size){

    scanf(" %s", vowels);

    int i = 0, count=0;

    while(vowels[i]!='\0'){
        if (vowels[i] == 'a' || vowels[i] == 'e' || vowels[i] == 'i' || vowels[i] == 'o' || vowels[i] == 'u') {
            count++;
        }
        i++;
    }

    return count;
}

void print_vowels(char vowels[], int size){

    scanf(" %s", vowels);

    int i = 0, count=0;

    while(vowels[i]!='\0'){
        if (vowels[i] == 'a' || vowels[i] == 'e' || vowels[i] == 'i' || vowels[i] == 'o' || vowels[i] == 'u') {
            printf("%c", vowels[i]);
        }
        i++;
    }

}

int max(int ints[], int size){
    int max=0;
    for(int i=0;i<size;i++){
        scanf(" %d", &ints[i]);
    }

    for(int n =0;n<size;n++){
        if(ints[n]>max){
            max = ints[n];
        }
    }
    printf(" %d",max);
}

int min(int ints[], int size){

    for(int i=0;i<size;i++){
        scanf(" %d", &ints[i]);
    }
    int min=ints[0];
    for(int n =0;n<size;n++){
        if(ints[n]<min){
            min = ints[n];
        }
    }
    printf(" %d",min);
}

int count_segments_repeated_ints(int v[], int sizev, int r[], int sizer){
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < sizev; i++) {
        scanf(" %d", &v[i]);
    }
    printf("procura");
    for (int x = 0; x < sizer; x++) {
        scanf(" %d", &r[x]);
    }

    for (int y = 0; y < sizer; y++) {
        for (int z = 0; z < sizev; z++) {

            if(r[y] == v[z] && v[z] == v[z+1]){
                count1++;
            }else if(r[y] == v[z] && v[z] != v[z+1]){
                count2++;
            }
        }

    }
    printf("%d",count1);
    printf("\n%d",count2);
}
