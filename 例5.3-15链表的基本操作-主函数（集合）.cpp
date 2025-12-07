#include<stdio.h>
#include<stdlib.h>
struct node
{
	int num;
	struct node *next;
};
/*函数声明*/
struct node *creathead();
void print(struct node*head);
struct node*insertlist(struct node*head,struct node*q);
struct node *deletlist(struct node*head,int num);
/*主函数*/
int main()
{
	struct node *head,*ps;
	int num;
	printf("create linklist:\n");
	head=creathead();
	printf("print linklist:\n");
	print(head);
	printf("insert a tinger:");
	ps=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&ps->num);
	head=insertlist(head,ps);
	printf("print linklist:\n");
	print(head);
	printf("delet a integar:");
	scanf("%d",&num);
	head=deletlist(head,num);
	printf("print linklist:\n");
	print(head);
	return 0;
}
/*头插法建立链表*/
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
/*遍历链表*/
void print(struct node*head)
{
	struct node*p=head;
	while(p)
	{
		printf("%d ",p->num);
		p=p->next;
	}
	printf("\n");
}
/*插入节点*/
struct node*insertlist(struct node*head,struct node*q)
{
	struct node*p;
	if(!head)//空链表
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
/*删除节点*/
struct node *deletlist(struct node*head,int num)
{
	struct node *p,*q;
	if(head==NULL)//链表为空
		return head;
	if(head&&head->num==num)//删除首节点且首节点非空！printf("print linklist:\n");
		print(head);
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
/**/
/**/
