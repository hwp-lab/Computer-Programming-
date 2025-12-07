#include<stdio.h>
struct node
{
	int num;
	struct node *next;
};
struct node*insertlist(struct node*head,struct node*q)
{
	struct node*p;
	if(!head)//¿ÕÁ´±í
	{
		head=q;
		return head;
	}
	if(q->num<head->num)
	{
		q->next=head;
		head=q;
		return head;
	}
	p=head;
	while(p->next&&p->next->num<q->num)
		p=p->next;
	q->next=p->next;
	p->next=q;
	return head;
}
