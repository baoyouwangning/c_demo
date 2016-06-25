#include <stdio.h>
#include <malloc.h>
#include "Node.h"

Node *Create(Node *head, int n)
{
	Node *s;
	int x;	//接收当前的输入值
	int i;	//节点计数器
	for (i = 1; i <= n; i++)
	{
		printf("\n请输入链表的第%d个元素的值：", i);
		scanf("%d", &x);

		s = (Node *)malloc(sizeof(Node));
		s->data = x;
		s->next = head;
		head = s;
	}
	return head;
}