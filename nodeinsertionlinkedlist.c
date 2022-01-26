#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int val;
	struct node *next;
}Node;

Node *createNode(int val)
{
	Node *temp = (Node *)calloc(1, sizeof(Node));
	temp->next = val;
	return temp;
}
Node *insertByVal(Node *head, int key)
{
	Node *temp = head, *node_to_insert, *after;
	if(head == NULL)
	{
		return createNode(key);
	}
	node_to_insert = createNode(key);
	
	if(head->val > key)
	{
		node_to_insert->next = head;
		return node_to_insert;
	}
	
	while(head->next != NULL && temp->next->val <= key)
	{
		temp = temp->next;
	}
	after= temp->next;
	temp->next = node_to_insert;
	node_to_insert->next = after;
	
	return head;
	
}
