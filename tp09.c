//
// Created by tiago on 01/12/2021.
//

#include "tp09.h"


RECT *create_rect(RECT r) {

    RECT *pr = NULL;
    pr = (RECT *) malloc(sizeof(RECT));
    (*pr).downpt.x = r.downpt.x;
    pr->downpt.y = r.downpt.y;
    (*pr).uppt.x = r.uppt.x;
    pr->uppt.y = r.uppt.y;
    return  pr;
}

int compare_rect_v2(const struct rect *pr1, const struct rect *pr2) {
    if (compare_pts((*pr1).downpt, pr2->downpt) && compare_pts((*pr1).uppt, pr2->uppt)) {
        return 1;
    } else {
        return 0;
    }

}

int compare_rects(struct rect r1, struct rect r2) {
    if (compare_pts(r1.downpt, r2.downpt) && compare_pts(r1.uppt, r2.uppt)) {
        return 1;
    } else {
        return 0;
    }
}

int compare_pt(struct pt p1, struct pt p2) {
    if (p1.x == p2.x && p1.y == p2.y) {
        return 1;
    } else {
        return 0;
    }
}

int main_tp09(int argc, const char * argv[]) {
    int *px = (int *) malloc(4 * sizeof(int));
    for (int i = 0; i < 4; ++i) {
        *(px + i) = 10 * (i + 1);
    }
    for (int i = 0; i < 4; ++i) {
        printf("%d\n", *(px + i));
    }
//Ter 3 caixas para um apontador de inteiro
//Um apontador para um apontador
    int **ppx = (int **) malloc(3 * sizeof(int *));
    //Esta estrutura é do pt com dois argumentos la dentro
    //Defenindo a variavel p1 na memoria vai ter la dentro os argumentos
    //p1 nao é um apontador, é um novo tipo de dados só que em vez de guardar um valor de um certo tipo guarda os valores estabelecidos
    struct pt p1 = {1, 1};
    //scanf("%d %d", &p1.x, &p1.y);
    //printf("%d %d\n", p1.x, p1.y);
    struct pt *pp1 = &p1;
    //scanf("%d %d", &(pp1->x), &((*pp1).y));
    //printf("%d %d\n", (*pp1).x, pp1->y);
    struct pt p2 = p1;
    //if(compare_pt(p1, p2))printf("Iguais\n");
    RECT r1 = {{2, 0},
               {1, 1}};
    RECT r2 = {{2, 0},
               {1, 1}};
    RECT *pr1 = &r1;
    RECT *pr2 = &r2;
    //printf("r1=(%d %d) (%d %d)\n", r1.downpt.x, r1.downpt.y, r1.uppt.x, pr1->uppt.y);
    //scanf("%d %d %d %d", &r1.downpt.x, &r1.downpt.y, &r1.uppt.x, &r1.uppt.y);
    //if(compare_rect(r1, r2))printf("Iguais\n");
    //if(compare_rect_v2(pr1, pr2))printf("Iguais\n");
    return 0;
}