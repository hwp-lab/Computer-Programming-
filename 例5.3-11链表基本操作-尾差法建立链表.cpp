#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int num;
	struct node *next;
};
struct node *createhead(void)//*不能少的样子
{
	struct node *head,*p,*rear;
	int n;
	head=NULL;
	printf("n=");
	scanf("%d",&n);
	while(n!=0)
	{
	p=(struct node*)malloc(sizeof(struct node));
	p->next=NULL;
	p->num=n;
	if(!head)
		p=head;
	else
		rear->next=p;
	rear=p;
	printf("n=");
	scanf("%d",&n);
	}
	return head;
}
