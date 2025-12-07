#include<stdio.h>
#include<stdlib.h>
/*定义结构体*/
struct stu
{
	int num;
	float score;
	struct stu *next;
};
/*全局变量*/
int n;
/*函数声明*/
struct stu *creat();
void print(struct stu *head);
/*主函数*/
int main()
{
	struct stu *head;
	head=creat();
	print(head);
	return 0;
}
/*尾差法建立链表*/
struct stu *creat()
{
	struct stu *p,*head,*rear;
	n=0;
	p=rear=(struct stu*)malloc(sizeof(struct stu));
	printf("input num and score:");
	scanf("%d %f",&p->num,&p->score);
	head=NULL;
	while(p->num!=0)
	{
		n++;
		if(n==1)
			head=p;
		else
			rear->next=p;
		rear=p;
		p=(struct stu*)malloc(sizeof(struct stu));
		printf("input num and score:");
		scanf("%d %f",&p->num,&p->score);
	}
	rear->next=NULL;
	return head;
}
/*输出链表*/
void print(struct stu *head)
{
	struct stu *p;
	printf("\nnow,these %d  records are:\n",n);
	p=head;
	while(p!=NULL&&head!=NULL)
	{
		printf("%d %5.1f\n",p->num,p->score);
		p=p->next;
	}
}
