//
// Created by tiago on 22/11/2021.
//

#ifndef LP1_TP10_H
#define LP1_TP10_H

#include <stdio.h>
//#include "tp09.h"

/** Structs & Pointers:
 *  - Self-referencing (structure containing field with pointer to itself).
 *  - Cross-referencing (structure containing field with pointer to another structure).
 */

/** Structure characterizing a node for storing a point */

typedef struct node_point
{
    //struct pt info; // guardar dois pontos
    //Self-referencing
    struct node_point *pdown; //
}NODE_POINT;

/** Structure characterizing a stack of node points (LIFO management: push, pop, peep). */
typedef struct stack_node_points
{
    int nnodes;
    //Cross-referencing
    NODE_POINT *ptop;
} STACK_NODE_POINTS;

/**
 * Checks if stack is empty.
 * @param psnp - contant pointer to stack of node points.
 * @return 0 (false) or 1 (true)
 */
int is_empty_stacknodepoints_v1(const STACK_NODE_POINTS* psnp);

/**
 * Checks if stack is empty.
 * @param snp - copy of stack of node points.
 * @return 0 (false) or 1 (true)
 */
int is_empty_stacknodepoints_v2(STACK_NODE_POINTS snp);

/**
 * Push a new node into the stack..
 * @param psnp -  pointer to stack of node points.
 * @param newpt - new point to push into stack.
 */
//void push_stack_node_points(STACK_NODE_POINTS *psnp, struct pt newpt);

/**
 * Pop the node at the top of stack and frees the node memory.
 * @param psnp -  pointer to stack of node points.
 * @return copy of point that was stored in the node info at top of stack.
 */
struct pt pop_stack_node_points_copynode(STACK_NODE_POINTS* psnp);

/**
 * Pop the node at the top of stack but does not free the node memory.
 * @param psnp -  pointer to stack of node points.
 * @return pointer to node that was stored at top of stack.
 */
NODE_POINT* pop_stack_node_points_refnode(STACK_NODE_POINTS* psnp);

/**
 * Peep the node info below delta from the top of stack.
 * @param psnp -  pointer to stack of node points.
 * @return copy of node info below delta position from top of stack.
 */
struct pt peep_stack_node_points_copynode(const STACK_NODE_POINTS* psnp, int top_delta);

/**
 * Peep the node info below delta from the top of stack.
 * @param psnp -  pointer to stack of node points.
 * @return pointer to node stored delta position below the top of stack.
 */
NODE_POINT* peep_stack_node_points_refnode(const STACK_NODE_POINTS* psnp, int top_delta);

/**
 * Print all nodes info for the entire stack.
 */
void print_stack_node_points(const STACK_NODE_POINTS *psnp);

/** Main tp10 test funtion. */
int main_tp10(int argc, const char * argv[]);


#endif //LP1_TP10_H
