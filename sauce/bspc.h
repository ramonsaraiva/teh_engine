#ifndef HAS_BSPC_H
#define HAS_BSPC_H

#include "tri.h"

/*
 * nodo jajajaja
 *
 */
struct node
{
	bool is_leaf;
	bool is_solid;
	struct node* back, * front;
	struct tri* tris;
};

/*
 * piscina de nodos jajajajaj
 *
 */
#define BSPC_NODE_POOL_LEN 66666

extern struct node node_pool[BSPC_NODE_POOL_LEN];
extern int node_pool_c;

struct node* node_alloc();
void node_free(struct node* node);

/*
 * compilador bsp
 *
 */
struct node* bspc(struct tri* list);

#endif