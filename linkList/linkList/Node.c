#include <stdio.h>
#include <malloc.h>
#include "Node.h"

Node *Create(Node *head, int n)
{
	Node *s;
	int x;	//���յ�ǰ������ֵ
	int i;	//�ڵ������
	for (i = 1; i <= n; i++)
	{
		printf("\n����������ĵ�%d��Ԫ�ص�ֵ��", i);
		scanf("%d", &x);

		s = (Node *)malloc(sizeof(Node));
		s->data = x;
		s->next = head;
		head = s;
	}
	return head;
}