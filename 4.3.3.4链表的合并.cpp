#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*定义结构体*/
typedef struct student
{
	int num;
	int score;
	struct student*next;
}stu;
/*函数声明*/
stu*createlist(int n);
stu*combinelist(stu*head1,stu*head2);
stu*sortlist(stu*head);
void printlist(stu*head);
/*主函数*/
int main()
{
	int m,n;
	stu*head1,*head2,*head,*t;
	printf("input number of two lists:");
	scanf("%d %d",&m,&n);
	head1=createlist(m);
	head2=createlist(n);
	head=combinelist(head1,head2);
	printf("after combination:\n");
	printlist(head);
	printf("after sort:\n");
	head=sortlist(head);
	printlist(head);
	while(head!=NULL)
	{
		t=head;
		head=head->next;
		free(t);
	}
	return 0;
}
/*链表输入函数*/
stu*createlist(int n)
{
	stu*head,*tail,*p;
	head=tail=NULL;
	int i;
	printf("input %d numbers and scores:\n",n);
	for(i=0;i<n;i++)
	{
		p=(stu*)malloc(n*sizeof(stu));//sizeof(stu) vs sizeof(stu*)???
		if(p==NULL)
		{
			printf("no enough memory\n");
			exit(1);
		}
		scanf("%d %d",&p->num,&p->score);
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
/*链表合并函数*/
stu*combinelist(stu*head1,stu*head2)
{
	if(head1==NULL)
		return head2;
	stu*p;
	p=head1;
	while(p->next!=NULL)
		p=p->next;
	p->next=head2;//连接和赋值区别？？？
	return head1;
}
/*链表排序函数*/
stu* sortlist(stu* head)
{
	if (head == NULL||head->next==NULL)
	{
		return head;
	}
	
	stu *p, *q, *prev;
	int swapped;
	
	// 使用冒泡排序法进行排序
	do
	{
		swapped = 0;
		p = head;
		prev = NULL;
		
		while (p != NULL && p->next != NULL)
		{
			q = p->next;
			
			if (p->num > q->num) // 如果指数较小，交换
			{
				if (prev == NULL)
				{
					// 交换头节点
					p->next = q->next;
					q->next = p;
					head = q;
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
/*链表打印函数*/
void printlist(stu*head)
{
	stu*p;
	p=head;
	while(p)
	{
		printf("%d %d\n",p->num,p->score);
		p=p->next;
	}
}
/**/
