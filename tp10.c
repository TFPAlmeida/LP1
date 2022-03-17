//
// Created by tiago on 22/11/2021.
//
/*
#include "tp10.h"

int main_tp10(int argc, const char * argv[]){

    STACK_NODE_POINTS snp1 = {NULL, 0};

    if(is_empty_stacknodepoints_v1(&snp1)){
        printf("vazia");
    }

    struct pt pt1 = {4.0f,4.0f};
    push_stack_node_points(&snp1,&pt1);
    return 0;
}

int is_empty_stacknodepoints_v1(const STACK_NODE_POINTS* psnp){

    return psnp -> ptop == NULL && psnp -> nnodes == 0;
    //(*psnp).ptop==NULL
}

void push_stack_node_points(STACK_NODE_POINTS *psnp, struct pt newpt){

    NODE_POINT *pnp =(NODE_POINT*)calloc(1,sizeof(NODE_POINT));
    pnp -> info = newpt;

     * pnp -> info.x = newpt.x;
     * pnp -> info.y = newpt.y;
     *
    pnp -> pdown = psnp-> ptop;
    psnp -> ptop = pnp;
    psnp -> nnodes++;

}

struct pt pop_stack_node_points_copynode(STACK_NODE_POINTS* psnp){

    struct pt ptaux = {FLT_MAX,FLT_MAX};
    if(is_empty_stacknodepoints_v1(psnp)){
        return ptaux;
    }
    NODE_POINT *pnp = psnp -> ptop;
    ptaux = pnp -> info;
    psnp -> ptop = pnp -> pdown;
    psnp -> nnodes--;
    free(pnp);
    return ptaux;
}

NODE_POINT* peep_stack_node_points_refnode(const STACK_NODE_POINTS* psnp, int top_delta){

    if(is_empty_stacknodepoints_v1(psnp) || top_delta > psnp -> nnodes){
        return NULL;
    }

    NODE_POINT *pnp = psnp -> ptop;
    while(pnp != NULL && top_delta > 0){
        pnp = pnp -> pdown;
        top_delta--;
    }
    return pnp;
}
*/