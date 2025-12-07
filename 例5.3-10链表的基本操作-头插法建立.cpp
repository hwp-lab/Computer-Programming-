#include<stdio.h>
#include<stdlib.h>
struct node
{
	int num;
	struct node *next;
};
struct node *creathead()
{
	struct node *head,*p;
	int n;
	printf("n=");
	scanf("%d",&n);
	head=NULL;
	while(n!=0)
	{
		p=(struct node *)malloc(sizeof(struct node));
		p->num=n;
		p->next=head;
		head=p;//?
		printf("n=");
		scanf("%d",&n);
	}
	return head;
}
/*遍历列表函数*/
void print(struct node *head)
{
	struct node *p;
	p=head;
	while(p)
	{
		printf("%d\n",p->num);
		p=p->next;
	}
}
int main()
{
	struct node *creathead();
	void print(struct node *head);
	return 0;
}
