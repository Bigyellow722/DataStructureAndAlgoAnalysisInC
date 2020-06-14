#ifndef __TREE_H
#define __TREE_H

#include "common.h"

/* The defination of general tree */
typedef struct TreeNode *ptrToGNode;

struct GTreeNode {
	struct GTreeNode *FirstChild;
	struct GTreeNode *NextChild;
};


/* The defination of binary tree */

struct BinTreeNode {
	struct BinTreeNode *left;
	struct BinTreeNode *right;
};

struct BinTreeNode *createBinTreeNode();
void freeBinTreeNode(struct BinTreeNode *tmp);
void initBinTreeNode(struct BinTreeNode *tmp);
struct BinTreeNode *createBinTree();






#endif /* __TREE_H */
