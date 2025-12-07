#include<stdio.h>
#include<math.h>
int main() {
	int i,n;
	float k;
	for (n = 100; n <= 200; n++) {
		k = sqrt(n);
		for (i = 2; i <= k; i++)
			if (n % i == 0) break;
		if (i > k)printf("%d ", n);
	}
	return 0;
}
