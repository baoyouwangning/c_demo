#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

int main(void)
{
	Node *head = NULL;	//ͷָ��
	Node *p = NULL;	//�α�ָ��
	int n;	//����������

	printf("����������ĳ��ȣ�");
	scanf("%d", &n);

	head = Create(head, n);

	printf("\n  ����Ĵ��������\n");

	if (n == 0)
	{
		printf("NULL\n");
	}
	else
	{
		for (p = head; p != NULL; p = p->next) //����ÿ���ڵ��ȡdataֵ
		{
			printf("%d", p->data);
		}
	}

	system("pause");
	return 0;
}