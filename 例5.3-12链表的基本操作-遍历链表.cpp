#include<stdio.h>
struct node
{
	int num;
	struct node *next;
};
void print(struct node*head)
{
	struct node*p=head;
	while(p)
	{
		printf("%d",p->num);
		p=p->next;
	}
}
