#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
		int val;
		struct Node *left;
		struct Node *right;
} Node;

Node *createNode(int val)
{
	Node *temp = (Node *)calloc(1,sizeof(Node));
	temp->val = val;
	return temp;
}

void preorder(Node *root)
{
	if(root==NULL)
		return;
 //post order 23 after 25.
	preorder(root->left);
	printf("%d ", root->val);
	preorder(root->right);
	
}
//recursive unction to insert a node into a binary tree
Node *bstInsert(Node *root, int val)
{
	if(root == NULL)
	{
		return createNode(val);
	}

	if(val< root->val)
	{
		root ->left  = bstInsert(root->left, val);
	} else if(val >= root->val)
	{
		root->right = bstInsert(root->right, val);
	}
	return root;
}

int main(void)
{
	Node *root =NULL;
	root = bstInsert(root,5);
	root = bstInsert(root,3);
	root = bstInsert(root,1);
	root = bstInsert(root,0);
	root = bstInsert(root,2);
	root = bstInsert(root,4);
	root = bstInsert(root,7);
	root = bstInsert(root,6);
	root = bstInsert(root,8);

	
	preorder(root);
	
	return EXIT_SUCCESS;
}
