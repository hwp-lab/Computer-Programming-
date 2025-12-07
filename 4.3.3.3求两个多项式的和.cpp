/*放弃吧。。。*/
#include<stdio.h>
#include<stdlib.h>
/*定义结构体*/
struct polynome
{
	int a;
	int e;
	struct polynome*next;
};
/*函数声明*/
struct polynome* createlist(int n);
struct polynome* multiple(struct polynome*head1,struct polynome*head2,int m,int n);
struct polynome* sort(struct polynome*head);
struct polynome* delet(struct polynome*head);
void printlist(struct polynome*head);
void freelist(struct polynome*);
/*主函数*/
int main()
{
	int m,n;
	struct polynome*head1,*head2,*head;
	printf("input n:");
	scanf("%d",&n);
	head1=createlist(n);
	printlist(head1);
	
	printf("input m:");
	scanf("%d",&m);
	head2=createlist(m);
	printlist(head2);
	
	head=multiple(head1,head2,m,n);
	printlist(head);
	
	freelist(head1);//???
	freelist(head2);
	freelist(head);
	return 0;
}
/*输入函数*/
struct polynome* createlist(int n)
{
	struct polynome*head,*p,*tail;
	int i;
	head=tail=NULL;
	printf("input a&e：\n");
	for(i=0;i<n;i++)
	{
		p=(struct polynome*)malloc(sizeof(struct polynome));
		if (p == NULL)
		{
			printf("Memory allocation failed.\n");
			exit(1);
		}
		scanf("%d %d",&p->a,&p->e);
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
/*多项式相乘函数*/
struct polynome* multiple(struct polynome*head1,struct polynome*head2,int m,int n)
{
	struct polynome*head=NULL,*r,*tail=NULL;
	struct polynome*p,*q;
	
	p=head1;	
	int i,j;
	for(i=0;i<m;i++)
	{
		q=head2;
		for(j=0;j<n;j++)
		{
			r=(struct polynome*)malloc(sizeof(struct polynome));//
			if (r == NULL) 
			{
				printf("Memory allocation failed.\n");
				exit(1);
			}
			r->a=p->a*q->a;
			r->e=p->e+q->e;
			r->next=NULL;
			//把结果插入链表
			if(head==NULL)
			{
				head=r;
				tail=r;
			}
			else
			{
				tail->next=r;
				tail=r;
			}
			q=q->next;
			if(q==NULL)
				break;
		}
		p=p->next;
	}
	printf("after combination:\n");
	printlist(head);
	head=sort(head);
	printf("after sort:\n");
	printlist(head);
	head=delet(head);
	return head;
}
/*冒泡排序函数*/
struct polynome* sort(struct polynome* head)
{
	if (head == NULL)
	{
		return head;
	}
	
	struct polynome *p, *q, *prev;
	int swapped;
	
	// 使用冒泡排序法进行排序
	do
	{
		swapped = 0;
		p = head;
		prev = NULL;//prev是p的前一个
		
		while (p != NULL && p->next != NULL)
		{
			q = p->next;
			
			if (p->e < q->e) // 如果指数较小，交换
			{
				if (prev == NULL)
				{
					// 交换头节点
					p->next = q->next;
					q->next = p;
					head = q;//结构体变量相互赋值
					swapped = 1;
					prev = q;
					p = q->next;
				}
				else
				{
					prev->next = q;
					p->next = q->next;
					q->next = p;
					swapped = 1;
					prev = q;
					p = q->next;
				}
			}
			else
			{
				prev = p;
				p = p->next;
			}
		}
	} while (swapped); // 如果发生了交换，继续遍历
	return head;
}
/*合并同类项函数*/
struct polynome* delet(struct polynome*head)
{
	struct polynome*p=head;
	while(p!=NULL&&p->next!=NULL)
	{
		if(p->e==p->next->e)
		{
			struct polynome*t=p->next;
			p->a+=t->a;
			p->next=t->next;
			free(t);
		}
		else
			p=p->next;
	}
	return head;
}
/*输出函数*/
void printlist(struct polynome* head)
{
	struct polynome*p;
	p=head;
	printf("{");
	while(p)
	{
		printf("(%d,",p->a);
		printf("%d)",p->e);
		if(p->next!=NULL)
			printf(",");
		p=p->next;
	}
	printf("}\n");
}
void freelist(struct polynome*head)
{
	struct polynome*p;
	while(head!=NULL)
	{
		p=head;
		head=head->next;
		free(p);
	}
}
/*原排序函数
struct polynome *p,*q;
int t1,t2;
for(p=head;p->next!=NULL;p=p->next)
{
for(q=p->next;q!=NULL;q=q->next)
{
if(p->e<q->e)
{
t1=p->e;
t2=p->a;
p->e=q->e;
p->a=q->a;
q->e=t1;
q->a=t2;
}
}
}
return head;*/
/*struct polynome* sort(struct polynome* head)
{
if (head == NULL)
{
return head;
}
struct polynome *p, *q;
struct polynome*prev;//prev记录q的前一个结点，初始化为 NULL 说明 q 就是头节点
struct polynome *temp;  // 用于临时保存节点指针以便交换
for (p = head; p!= NULL; p = p->next)
{
prev = NULL;
for (q = head; q!= NULL && q!= p; q = q->next)
{
if (q->e > p->e)
{
if (prev == NULL)
{
// 处理交换头节点的情况
head = p;//头节点更新为p
prev = p;//p,q交换
p = q;
q = prev;
}
else
{
// 一般节点交换的情况
prev->next = p;
temp = p->next;
p->next = q->next;
q->next = temp;
prev = p;
p = q;
q = prev;
}
}
else
{
prev = q;
}
}
}
return head;
}*/
