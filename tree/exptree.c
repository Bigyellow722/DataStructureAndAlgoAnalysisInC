#include "exptree.h"

struct ExpTreeNode *createExpTreeNode(enum datatype t, void* value)
{
	struct ExpTreeNode *tmp = (struct ExpTreeNode *)malloc(sizeof(struct ExpTreeNode));
	if (!tmp) {
		fprintf(stderr, "%s:An err occupied in line %d", __FUNCTION__, __LINE__);
		return NULL;
	}
	if (t = OP)
		tmp->data.op = *(char *)value;
	if (t = NUM)
		tmp->data.num = *(int *)value;
	tmp->node = createBinTreeNode();
	return tmp;
}

void freeExpTreeNode(struct ExpTreeNode *tmp)
{
	freeBinTreeNode(tmp->node);
	free(tmp);
}


