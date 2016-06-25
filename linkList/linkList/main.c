#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

int main(void)
{
	Node *head = NULL;	//头指针
	Node *p = NULL;	//游标指针
	int n;	//接收链表长度

	printf("请输入链表的长度：");
	scanf("%d", &n);

	head = Create(head, n);

	printf("\n  链表的创建结果：\n");

	if (n == 0)
	{
		printf("NULL\n");
	}
	else
	{
		for (p = head; p != NULL; p = p->next) //遍历每个节点读取data值
		{
			printf("%d", p->data);
		}
	}

	system("pause");
	return 0;
}