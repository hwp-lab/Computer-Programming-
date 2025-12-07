#include<stdio.h>
#include<stdlib.h>
struct node
{
	int num;
	struct node *next;
};
struct node *deletlist(struct node*head,int num)
{
	struct node *p,*q;
	if(head&&head->num==num)//不理解head干啥的
	{
		p=head;
		head=p->next;
		free(p);
		return head;
	}
	p=q=head;
	while(p&&p->num!=num)
	{
		q=p;
		p=p->next;
	}
	if(p)
	{
		q->next=p->next;
		free(p);
		return head;
	}
}
