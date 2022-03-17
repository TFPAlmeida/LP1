//
// Created by tiago on 29/11/2021.
//

#include "tp11.h"

int main_tp11(int argc, const char *argv[]) {

    CLASSSTUDENTS_DYNARR csda = {"LP1", NULL, 0, 0};
    create_dynarray_classstudents(&csda, 10);
    insert_student_dynarray_classstudents(&csda, "Joao", 1111, 0.0f);
    remove_student_dynarray_classstudents(&csda, "Maria");


    return 0;
}

void create_dynarray_classstudents(CLASSSTUDENTS_DYNARR *pcs, int initsize) {

    pcs->pstudents = malloc(initsize * sizeof(STUDENT));
    pcs->size_students = initsize;
    pcs->current_student = 0;
    STUDENT *ps = pcs->pstudents;
    for (int i = 0; i < initsize; i++) {
        ps->pname = NULL;
        ps->number = 0;
        ps->grade = 0;
        ps++;
    }
    /*
     * STUDENT so = {NULL,0,0};
    for(int i = 0; i < initsize; i++){
       *(ps+ i) = so;
    }
     */
}

void insert_student_dynarray_classstudents(CLASSSTUDENTS_DYNARR *pcs, char name[], int number, float grade) {

    int newsize = pcs->size_students + 10;
    int oldsize = pcs->size_students;
    int n = 2;
    float g = 20;
    STUDENT *ps = NULL, so = {NULL, 0, 0};
    if (pcs->current_student == pcs->size_students) {
        pcs->pstudents = (STUDENT *) realloc(pcs->pstudents, newsize * sizeof(STUDENT));
        pcs->size_students = newsize;
        ps = pcs->pstudents;
        for (int i = oldsize + 1; i < newsize; i++) {
            *(ps + i) = so;
        }
    }
    ps = pcs->pstudents + pcs->current_student;
    ps->pname = (char *) malloc(strlen(name) + 1);
    strcpy(ps->pname, name);
    ps -> number = n;
    ps -> grade = g;
    pcs -> current_student++;
}

STUDENT remove_student_dynarray_classstudents(CLASSSTUDENTS_DYNARR *pcs, char name[]){

    STUDENT s = {NULL,0,0.0f};
    STUDENT *ps = find_student_dynarray_classstudents(*pcs, name);
    s = *ps;
    if( ps != NULL){
        while (ps < (pcs->current_student + pcs->pstudents)){
            *ps = *(ps +1);
            ps++;
        }
        if(ps == (pcs->current_student + pcs->pstudents)){
            *ps = s;
        }
        pcs -> current_student--;
    }

    return s;

}
