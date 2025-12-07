#include<stdio.h>
#include<stdlib.h>
struct stu
{
	int num;
	float score;
	struct stu *next;
};
struct stu *deletlist(struct stu*head,int num)
{
	struct stu *p,*q;
	if(head==NULL)
		return head;
	if(head&&head->num==num)
	{
		p=head;
		p->next=head;
		free(p);
	}
	p=q=head;
	while(p)
	{
		if(p->num!=num)
		{
			q=p;
			p=p->next;
		}
		q->next=p->next;
		free(p);
		p=q->next;
	}
	return head;
}
