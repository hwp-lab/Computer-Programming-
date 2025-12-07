#include <stdio.h>
#include <stdlib.h>

// 函数用于找到数组的划分点
int partitionDisjoint(int* nums, int numsSize) {
	int left_max = nums[0];
	int cur_max = nums[0];
	int partition_index = 0;
	
	for (int i = 1; i < numsSize; i++) {
		if (nums[i] < left_max) {
			partition_index = i;
			left_max = cur_max;
		} else {
			if (nums[i] > cur_max) {
				cur_max = nums[i];
			}
		}
	}
	return partition_index + 1;
}

int main() {
	int* nums;
	int count = 0;
	int capacity = 10;
	nums = (int*)malloc(capacity * sizeof(int));
	if (nums == NULL) {
		printf("内存分配失败！\n");
		return -1;
	}
	
	int num;
	printf("请输入数组元素（输入非数字字符结束输入）：");
	while (scanf("%d", &num) == 1) {
		if (count >= capacity) {
			capacity *= 2;
			nums = (int*)realloc(nums, capacity * sizeof(int));
			if (nums == NULL) {
				printf("内存分配失败！\n");
				return -1;
			}
		}
		nums[count] = num;
		count++;
	}
	
	int result = partitionDisjoint(nums, count);
	printf("Output: %d\n", result);
	
	free(nums);
	return 0;
}
