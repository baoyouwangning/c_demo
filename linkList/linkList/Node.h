#ifndef NODE_H
#define NODE_H

/*
*
* ����Node���ͽṹ��
*
* NodeΪstruct Node����
* NodePtrΪstruct Node * ����
*/
typedef struct Node
{
	int data;
	struct Node * next;
} Node, *NodePtr;

/*
*
* ��������
* @param  {Node *} head     [ͷָ��]
* @param  {int} n [�ڵ����]
*/
Node *Create(Node *head, int n);

#endif