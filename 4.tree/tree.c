#include "tree.h"


struct BinTreeNode *createBinTreeNode()
{
	struct BinTreeNode *tmp = (struct BinTreeNode *)malloc(sizeof(struct BinTreeNode));
	if (!tmp) {
		fprintf(stderr, "%s:An err occupied in line %d", __FUNCTION__, __LINE__);
		return NULL;
	}
	tmp->left = tmp->right = NULL;
	return tmp;
}

void freeBinTreeNode(struct BinTreeNode *tmp)
{
	if (!tmp) {
		return;
	}
	free(tmp);
}

void initBinTreeNode(struct BinTreeNode *tmp)
{
	if (!tmp) {
		fprintf(stderr, "%s:%d", __FUNCTION__, __LINE__);
		return;
	}
	tmp->left = tmp->right = NULL;
}

struct BinTreeNode *createBinTree()
{
	struct BinTreeNode *root = createBinTreeNode();
	return root;
}


