#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *pNext;
}Node;

typedef struct List 
{
	int iLen;
	Node *pFirstNode;

}List;

int main(int argc, char * argv[])
{
	List list;
	list.iLen = 0;
	list.pFirstNode = NULL;//有问题
	
	Node n1 = {12, NULL};
	list.pFirstNode = &n1;

	Node n2 = {13, NULL};
	n2.pNext = list.pFirstNode;
	list.pFirstNode = &n2;

	Node n3 = {14, NULL};
	n3.pNext = list.pFirstNode;
	list.pFirstNode = &n3;

	Node *p = list.pFirstNode;
	while(NULL != p)
	{
		printf("%d  ", p->data);
		p = p->pNext;
	}
	putchar('\n');
	return 0;
}
