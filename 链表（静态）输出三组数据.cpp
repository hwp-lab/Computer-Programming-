#include<stdio.h>
struct stu
{
	int num;
	float score;
	struct stu*next;
};
int main()
{
	struct stu a,b,c,*head,*p;
	a.num=123;a.score=98;
	b.num=234;b.score=89;
	c.num=345;c.score=78.5;
	head=&a;
	a.next=&b;
	b.next=&c;
	p=head;
	do
	{
		printf("%d %5.1f\n",p->num,p->score);//为啥用.不行了
		p=p->next;
	}while(p!=NULL);
	return 0;
}
