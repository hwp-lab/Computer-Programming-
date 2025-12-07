#include <stdio.h>
#include <stdlib.h>

// 定义多项式节点结构
struct polynome {
	int a;      // 系数
	int e;      // 指数
	struct polynome* next;  // 指向下一个节点的指针
};

// 创建多项式链表
struct polynome* createlist(int n) {
	struct polynome* head = NULL, * p, * tail;
	int a, e;
	
	for (int i = 0; i < n; i++) {
		printf("Enter coefficient and exponent of term %d: ", i + 1);
		scanf("%d %d", &a, &e);
		
		p = (struct polynome*)malloc(sizeof(struct polynome));
		if (p == NULL) {
			printf("Memory allocation failed.\n");
			exit(1);
		}
		p->a = a;
		p->e = e;
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

// 打印多项式链表
void printlist(struct polynome* head) {
	struct polynome* p = head;
	if (p == NULL) {
		printf("{}\n");
		return;
	}
	
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

// 释放链表的内存
void freelist(struct polynome* head) {
	struct polynome* p;
	while (head != NULL) {
		p = head;
		head = head->next;
		free(p);
	}
}

// 合并同类项
struct polynome* delet(struct polynome* head) {
	struct polynome* p, * q, * prev;
	p = head;
	while (p != NULL && p->next != NULL) {
		prev = p;
		q = p->next;
		while (q != NULL) {
			if (p->e == q->e) {
				p->a += q->a;  // 合并系数
				prev->next = q->next;  // 删除重复项
				free(q);
				q = prev->next;  // 继续检查下一个节点
			} else {
				prev = q;
				q = q->next;
			}
		}
		p = p->next;
	}
	return head;
}

// 排序链表，按指数从大到小排序
struct polynome* sort(struct polynome* head) {
	struct polynome *i, *j;
	int temp_a, temp_e;
	
	for (i = head; i != NULL; i = i->next) {
		for (j = i->next; j != NULL; j = j->next) {
			if (i->e < j->e) {  // 按指数降序排序
				temp_a = i->a;
				temp_e = i->e;
				i->a = j->a;
				i->e = j->e;
				j->a = temp_a;
				j->e = temp_e;
			}
		}
	}
	return head;
}

// 多项式相乘
struct polynome* multiple(struct polynome* head1, struct polynome* head2, int m, int n) {
	struct polynome* head = NULL, * r, * tail = NULL;
	struct polynome* p, * q;
	
	p = head1;
	for (int i = 0; i < m; i++) {
		q = head2;
		for (int j = 0; j < n; j++) {
			r = (struct polynome*)malloc(sizeof(struct polynome));
			if (r == NULL) {
				printf("Memory allocation failed.\n");
				exit(1);
			}
			r->a = p->a * q->a;
			r->e = p->e + q->e;
			r->next = NULL;
			
			// 插入到链表末尾
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
	
	head = sort(head);  // 排序
	head = delet(head);  // 合并同类项
	return head;
}

int main() {
	int m, n;
	struct polynome* head1, * head2, * result;
	
	printf("Enter the number of terms in the first polynomial: ");
	scanf("%d", &m);
	head1 = createlist(m);
	
	printf("Enter the number of terms in the second polynomial: ");
	scanf("%d", &n);
	head2 = createlist(n);
	
	// 打印输入的两个多项式
	printf("First polynomial: ");
	printlist(head1);
	printf("Second polynomial: ");
	printlist(head2);
	
	// 计算多项式乘积
	result = multiple(head1, head2, m, n);
	
	// 打印结果
	printf("Result of multiplication: ");
	printlist(result);
	
	// 释放内存
	freelist(head1);
	freelist(head2);
	freelist(result);
	
	return 0;
}
