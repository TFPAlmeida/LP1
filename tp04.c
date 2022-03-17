//
// Created by tiago on 11/10/2021.
//

#include "tp04.h"
#define MAXCOLS100 100
int main_tp04(int argc, const char *argv[]) {

    char str[] = "aabbbccbbbacc";
    char sub[] = "bbb";
    int lines = 3;
    int columns = 3;
    int mNx100[MAXCOLS100][MAXCOLS100] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    index_first_vogal(str);
    //remove_blanks(str);
    remove_sub(str, sub);

    //print_matrixNx100_ints(mNx100, lines, columns);

    return 0;
}


int index_first_vogal(char str[]) {

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            return i;
        }
        i++;
    }

}

char *remove_blanks(char str[]) {

    int size = strlen(str);

    for (int i = 0; i < size; i++) {

        if (isWhite(str[i])) {
            for (int x = 0; x < size; x++) {
                str[i] = str[i + 1];
                size--;
                i--;
            }
        }
    }
    return str;
}

char *remove_sub(char str[], char sub[]) {
    int x = 0;
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        for (x = 0; sub[x] != '\0'; x++) {
            if (str[i + x] == sub[x]) {
                continue;
            } else {
                break;
            }
        }
        if (sub[x] == '\0') {
            count++;
            for (int n = i; str[n] != '\0'; n++) {
                str[n] = str[n+x];
            }
        }
    }
    printf("%d\n", count);
    printf("%s", str);
    return str;
}

void print_matrixNx100_ints(int mNx100[][MAXCOLS100], int lines, int columns){

    for (int lim = 0; lim < lines; lim++) {
        for (int col = 0; col < columns; col++){
            printf("%d",mNx100[lim][col]);
        }
        printf("\n");
    }
}
/*
for(int i = 0; i < n; i++){
    if(n[i] == n[i+1]){
        count++;
        }
    }else{
    for(int x = 0; x < n; x++){
            m[x] = count;
            h[x] = n[i];
    }
        count = 0;
    }


for(int i = 0; i < n; i++){
    printf("%d repete-se %d",h[i],m[i]);
}
 */