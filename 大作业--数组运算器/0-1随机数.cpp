#include <stdio.h>
#include <stdlib.h>  
#include <time.h>  
int main() 
{
	
	srand(time(NULL));
	int i;
	for(i=0;i<5;i++)
	{
		double random_double = (double)rand() / RAND_MAX;
		printf("%f\n", random_double);
	}
	return 0;
}
