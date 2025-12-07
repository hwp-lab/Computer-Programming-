#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*定义结构体*/
typedef struct student {
	int num;
	int score;
	struct student* next;
} stu;

/*函数声明*/
stu* createlist(int n);
stu* combinelist(stu* head1, stu* head2, int m, int n);
stu* sortlist(stu* head);
void printlist(stu* head);

/*主函数*/
#include<stdio.h>
#include<stdlib.h>

struct polynome {
	int a;  // 系数
	int e;  // 指数
	struct polynome* next;
};

// 函数声明
struct polynome* createList(int n);
struct polynome* multiply(struct polynome* head1, struct polynome* head2, int m, int n);
struct polynome* sort(struct polynome* head);
struct polynome* deleteDuplicates(struct polynome* head);
void printList(struct polynome* head);
void freeList(struct polynome* head);

int main() {
	int m, n;
	struct polynome* head1, * head2, * head;
	
	printf("Input n: ");
	scanf("%d", &n);
	head1 = createList(n);
	
	printf("Input m: ");
	scanf("%d", &m);
	head2 = createList(m);
	
	printList(head2);
	
	head = multiply(head1, head2, m, n);
	printList(head);
	
	freeList(head1);
	freeList(head2);
	freeList(head);
	
	return 0;
}

struct polynome* createList(int n) {
	struct polynome* head = NULL, * p, * tail = NULL;
	int i;
	
	printf("Input a & e:\n");
	for (i = 0; i < n; i++) {
		p = (struct polynome*)malloc(sizeof(struct polynome));
		if (p == NULL) {
			printf("Memory allocation failed.\n");
			exit(1);
		}
		scanf("%d %d", &p->a, &p->e);
		p->next = NULL;
		
		if (head == NULL) {
			head = p;
			tail = p;
		} else {
			tail->next = p;
			tail = p;
		}
	}
	return head;
}

struct polynome* multiply(struct polynome* head1, struct polynome* head2, int m, int n) {
	struct polynome* head = NULL, * r, * tail = NULL;
	struct polynome* p, * q;
	int i, j;
	
	p = head1;
	for (i = 0; i < m; i++) {
		q = head2;
		for (j = 0; j < n; j++) {
			r = (struct polynome*)malloc(sizeof(struct polynome));
			if (r == NULL) {
				printf("Memory allocation failed.\n");
				exit(1);
			}
			r->a = p->a * q->a;
			r->e = p->e + q->e;
			r->next = NULL;
			
			if (head == NULL) {
				head = r;
				tail = r;
			} else {
				tail->next = r;
				tail = r;
			}
			q = q->next;
		}
		p = p->next;
	}
	
	head = sort(head);
	head = deleteDuplicates(head);
	
	return head;
}

struct polynome* sort(struct polynome* head) {
	if (head == NULL) return head;
	
	struct polynome* p, * q, * prev;
	int swapped;
	
	do {
		swapped = 0;
		p = head;
		prev = NULL;
		
		while (p != NULL && p->next != NULL) {
			q = p->next;
			
			if (p->e < q->e) {
				if (prev == NULL) {
					p->next = q->next;
					q->next = p;
					head = q;
					swapped = 1;
					prev = q;
					p = q->next;
				} else {
					prev->next = q;
					p->next = q->next;
					q->next = p;
					swapped = 1;
					prev = q;
					p = q->next;
				}
			} else {
				prev = p;
				p = p->next;
			}
		}
	} while (swapped);
	
	return head;
}

struct polynome* deleteDuplicates(struct polynome* head) {
	struct polynome* p = head;
	while (p != NULL && p->next != NULL) {
		if (p->e == p->next->e) {
			struct polynome* temp = p->next;
			p->a += temp->a;
			p->next = temp->next;
			free(temp);
		} else {
			p = p->next;
		}
	}
	return head;
}

void printList(struct polynome* head) {
	struct polynome* p = head;
	printf("{");
	while (p) {
		printf("(%d, %d)", p->a, p->e);
		if (p->next != NULL) {
			printf(", ");
		}
		p = p->next;
	}
	printf("}\n");
}

void freeList(struct polynome* head) {
	struct polynome* p;
	while (head != NULL) {
		p = head;
		head = head->next;
		free(p);
	}
}
