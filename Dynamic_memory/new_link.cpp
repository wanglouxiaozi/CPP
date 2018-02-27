#include <iostream>
#include <cstdio>
#include <unistd.h>
using namespace std;

struct node
{
	int data;
	int num;
	struct node *next;
};

int main()
{
	struct node *head = NULL;
	struct node *p = NULL;
	struct node *q;
	q = new node;
	q->next = NULL;
	q->num = 1;
	int a = -1;
	cout << "please input the first num:";
	cin >> a;
	q->data = a;
	head = q;
	for (int i=0; i<5; i++)
	{
		p = q;
		q = new node;
		q->next = NULL;
		p->next = q;
		q->num = p->num + 1;
		cout << "please input the " << q->num << " num:";
		cin >> a;
		q->data = a;
	}

	//输出链表
	q = head;
	while (q != NULL) 
	{
		printf("%d %d\n", q->num, q->data);
		q = q->next;
	}

	//释放内存
	q = head;
	p = NULL;
	while(q != NULL)
	{
		p = q->next;
		delete q;
		q = p; 
	}

	return 0;

}
