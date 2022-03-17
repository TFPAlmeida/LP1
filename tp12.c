//
// Created by tiago on 06/12/2021.
//

#include "tp12.h"

int main_tp12(int argc, const char *argv[]) {
    char filename[] = "C:\\Users\\tiago\\CLionProjects\\LP1\\data\\rects.txt";
    FILE *fp = NULL;
    DYNARRAYRECTS dar = {NULL, 0};
    RECT r1 = {1.0, 1.0};
    RECT r2 = {2.0, 2.0};
    create_dyn_array_rects(&dar, 10);
    insert_rect_dyn_array_rects(&dar, r1);
    insert_rect_dyn_array_rects(&dar, r2);
    save_dyn_array_rects_txt(dar, filename);
    return 0;
}

void create_dyn_array_rects(DYNARRAYRECTS *pdar, int numberOfRectangles) {

    pdar->prects = calloc(numberOfRectangles, sizeof(RECT));
    pdar->size = numberOfRectangles;
}

void insert_rect_dyn_array_rects(DYNARRAYRECTS *pdar, RECT rect) {
    RECT *pr = pdar->prects;
    RECT r0 = {{0.0, 0.0},
               {0.0, 0.0}};
    for (int i = 0; i < pdar->size; i++) {
        if (compare_rects(r0, *(pr + i))) {
            *(pr + i) = rect;
            return;
        }
    }
    //realloc()
}

void save_dyn_array_rects_txt(DYNARRAYRECTS cs, char filename[]) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        fprintf(stdout,"ERROR-----%s\n", filename);
        return;
    }
    fprintf(fp, "RECTANGLES: %d\n", cs.size);
    RECT *pr = cs.prects;
    for(int i = 0; i < cs.size; i++){
        fprintf(fp,"RECT %d: %0.2f %0.2f %0.2f %0.2f", i, pr->downpt.x,pr->downpt.y,pr->uppt.x,pr->uppt.y);
        pr++;
    }
    fclose(fp);
}

void read_dyn_array_rects_txt(DYNARRAYRECTS *pcs, char filename[]){
    FILE *fp = fopen(filename,"r");
    if(fp == NULL){
        fprintf(stdout,"ERROR-----%s\n", filename);
        return;
    }
    int size = 0;
    char auseSTR[100]="";
    fscanf(fp,"%s %d",&size);
    create_dyn_array_rects(pcs,size);
    for(int i = 0;i<size;i++){
        fscanf(fp,"%[^:] %*[:] %f %f %f %f",auxStr,&(r.downpt.x),&(r.downpt.y),&(r.uppt.x),&(r.uppt.y))
        fprintf(stdout,"Just Read %s\n",auxStr);
        insert_rect_dyn_array_rects(pdar,r);
    }
}