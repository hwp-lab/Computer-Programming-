#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** figure(int n);
char* cal(char* p);

int main() {
	int n, i;
	printf("n=");
	scanf("%d", &n);
	char** p = figure(n);
	printf("%s\n", p[n - 1]);
	
	// 释放分配的内存
	for (i = 0; i < n; i++) {
		free(p[i]);
	}
	free(p);
	
	return 0;
}

char** figure(int n) {
	char** p = (char**)malloc(n * sizeof(char*));
	if (p == NULL) {
		printf("Memory allocation failed.\n");
		exit(1); // Memory allocation failed, exit the program
	}
	
	int i;
	for (i = 0; i < n; i++) {
		p[i] = (char*)malloc(2 * i + 1); // Size estimate based on length of sequence
		if (p[i] == NULL) {
			printf("Memory allocation failed.\n");
			exit(1); // Memory allocation failed, exit the program
		}
		
		if (i == 0) {
			strcpy(p[i], "1"); // Base case, the first sequence is "1"
		} else {
			char* t = cal(p[i - 1]); // Get the next sequence
			free(p[i]); // Free old string
			p[i] = t; // Update pointer to new string
		}
	}
	return p;
}

char* cal(char* p) {
	int i, j = 0;
	int count = 1;
	int l = strlen(p);
	char* q = (char*)malloc(2 * l + 1); // Allocate enough space for the next sequence
	if (q == NULL) {
		printf("Memory allocation failed.\n");
		exit(1); // Memory allocation failed, exit the program
	}
	
	for (i = 1; i < l; i++) {
		if (p[i] == p[i - 1]) {
			count++; // Increase count if characters are the same
		} else {
			q[j++] = count + '0'; // Convert count to character
			q[j++] = p[i - 1];    // Append the character itself
			count = 1;             // Reset count for the next new character
		}
	}
	
	// After the loop, handle the last group
	q[j++] = count + '0';
	q[j++] = p[l - 1];
	
	q[j] = '\0'; // Null-terminate the string
	
	return q;
}
