#include <stdio.h>
#include <stdlib.h>  
#include <time.h>  
int main() {
	
	srand(time(NULL));
	int i;
	double random;
	for(i=5;i>0;i--)
	{
		random= (double)rand()/((double)rand()+1);
		printf("%f\n", random);
	}
	return 0;
}
