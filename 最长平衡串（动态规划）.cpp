#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*后续再次出现相同的差值时，
意味着从第一次出现该差值的下一个位置到当前位置之间的子串中，
0 和 1 的个数是相等的，计算该子串长度并更新最大长度即可*/
int main() {
	int n;
	scanf("%d", &n);
	char s[100001];
	scanf("%s", s);
	
	int count_0 = 0, count_1 = 0;
	int max_len = 0;
	int* first_occur = (int*)malloc((2 * n + 1) * sizeof(int));//0和1数量差值第一次出现的位置
	for (int i = -n; i <= n; i++) {
		first_occur[i + n] = -1;//初始化为-1
	}
	first_occur[n] = 0;//差值为0的索引点
	
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			count_1++;
		} else {
			count_0++;
		}
		int diff = count_1 - count_0;
		int index = diff + n;
		if (first_occur[index]!= -1)
		{
			int cur_len = i + 1 - first_occur[index];
			if (cur_len > max_len)
				max_len = cur_len;
		}
		else 
			first_occur[index] = i + 1;
	}
	free(first_occur);
	printf("%d\n", max_len);
	return 0;
}
