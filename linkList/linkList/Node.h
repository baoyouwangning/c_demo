#ifndef NODE_H
#define NODE_H

/*
*
* 定义Node类型结构体
*
* Node为struct Node类型
* NodePtr为struct Node * 类型
*/
typedef struct Node
{
	int data;
	struct Node * next;
} Node, *NodePtr;

/*
*
* 创建链表
* @param  {Node *} head     [头指针]
* @param  {int} n [节点个数]
*/
Node *Create(Node *head, int n);

#endif