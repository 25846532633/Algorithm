#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	int S1[10001] = { 0 };
	int S2[10001] = { 0 };
	bool hashTable[10001] = { false };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &S1[i]);
		hashTable[S1[i]] = true;
	}
	int S3[20001] = { 0 };
	bool isFirst = true;
	int count = 0;
	for (int j = 0; j < m; j++)
	{
		scanf("%d", &S2[j]);
		if (hashTable[S2[j]])
		{
			S3[count++] = S2[j];
		}
	}
	for (int i = 0; i < count; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%d", S3[i]);
	}
	return 0;
}