#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp;
	char a[30];
	if(!(fp=fopen("t,txt","w+")))
	{
		printf("open fails\n");
		return EXIT_FAILURE;
	}
	fputs("Alan Turing\n",fp);
	fputs("John von Church\n",fp);
	fputs("Lscwnvr\n",fp);
	rewind(fp);
	while(fgets(a,sizeof(a),fp)!=NULL)
		printf("%s",a);//怎么循环起来的啊
	fclose(fp);
	return 0;
}
