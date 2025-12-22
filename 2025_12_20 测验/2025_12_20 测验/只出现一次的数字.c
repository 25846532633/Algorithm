#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int singleNumber(int* nums, int numsLen)
{
	int res = 0;
	for (int i = 0; i < numsLen; i++)
	{
		res = res^nums[i];//两个数相同为0，相异为1
	}
	return res;
}

int main()
{
	int arr[10] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int res = singleNumber(arr, n);
	printf("%d", res);
	return 0;
}