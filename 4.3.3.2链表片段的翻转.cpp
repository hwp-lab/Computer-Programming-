#include<stdio.h>//SB
#include<stdlib.h>
/*定义结构体*/
struct node
{
	int num;
	struct node *next;
};
/*函数声明*/
struct node*createlist(int l);
void printlist(struct node* head);
struct node*overturnlist(struct node* head,int m,int n);
/*主函数*/
int main()
{
	int l;
	int m,n;
	struct node*head;
	printf("input the length of the list:");
	scanf("%d",&l);
	printf("createlist:\n");
	head=createlist(l);
	printf("input two numbers:");
	scanf("%d %d",&m,&n);
	printf("the new lift:\n");
	head=overturnlist(head,m,n);
	printlist(head);
	return 0;
}
/*链表创建函数*/
struct node*createlist(int l)
{
	struct node*head,*p,*tail;
	int i;
	head=tail=NULL;
	printf("input %d numbers:",l);
	for(i=0;i<l;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));//分配内存啊啊啊
		scanf("%d",&p->num);
		p->next=NULL;
		if(head==NULL)
		{
			head=p;
			tail=p;
		}
		else
		{
			tail->next=p;
			tail=p;
		}
	}
	return head;
}
/*链表遍历（打印）函数*/
void printlist(struct node* head)
{
	struct node*p;
	p=head;
	while(p)
	{
		printf("%d",p->num);
		p=p->next;
	}
}
/*链表翻转函数*/
struct node*overturnlist(struct node* head,int m,int n)
{//来源于豆包，好复杂，懒得看了...
	if(head == NULL || m >= n)
	{
		return head;
	}
	struct node *prev = NULL, *cur = head;
	int index = 1;
	// 找到翻转区间的前一个节点
	while(index < m && cur)
	{
		prev = cur;
		cur = cur->next;
		index++;
	}
	struct node *start = cur;
	struct node *end = NULL;
	// 找到翻转区间的结束节点
	while(index <= n && cur)
	{
		cur = cur->next;
		index++;
	}
	end = cur;
	// 进行翻转操作
	struct node *p = start, *q = NULL;
	while(p!= end)
	{
		q = p->next;
		p->next = prev;
		prev = p;
		p = q;
	}
	if(prev)
	{
		start->next = end;
		if(m == 1)
		{
			head = prev;
		}
		else
		{
			cur = head;
			while(cur->next!= start)
			{
				cur = cur->next;
			}
			cur->next = prev;
		}
	}
	return head;
}
/*struct node*p,*q,*r;
if(head==NULL)
{
printf("error\n");
exit(0);
}
p=q=head;
while(p&&p->next->num!=m)
p=p->next;
r=p->next;
while(q&&q->num!=n)
q=q->next;
if(p&&q)
{
p->next=q;
r->next=q->next;
}
else
{
printf("no found\n");
exit(0);
}
while(r!=q)
{
r->next->next=r;
r=r->next;
}
return head;*/
