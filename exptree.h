#ifndef __EXPTREE_H
#define __EXPTREE_H

#include "tree.h"

/*The defination of expression */
enum datatype{
	OP = 0,
	NUM,
};

struct ExpTreeNode {
	enum datatype t;
	union {
		char op;
		int num;
	}data;
	struct BinTreeNode *node;
};

struct ExpTreeNode *createExpTreeNode(enum datatype t, void* value);
void freeExpTreeNode(struct ExpTreeNode *tmp);
#endif
