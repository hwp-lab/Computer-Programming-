#include<stdio.h>
void treetop(char c)
{
	printf("   %c\n",c);
	printf("  %c%c%c\n",c,c,c);
	printf(" %c%c%c%c%c\n",c,c,c,c,c);
	printf("%c%c%c%c%c%c%c\n",c,c,c,c,c,c,c);
}
void treetrunk(char c)
{
	printf("   %c\n",c);
	printf("   %c\n",c);
	printf("   %c\n",c);
}
int main()
{
	treetop('$');
	treetop('$');
	treetrunk('$');
}
