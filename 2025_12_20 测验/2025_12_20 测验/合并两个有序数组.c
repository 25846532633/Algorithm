//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
int compare(const void* num1, const void* num2)
{
	return (*(int*)num1 - *(int*)num2);
}

void merge(int* A, int ALen, int m, int* B, int BLen, int n)
{
	memcpy(A + m, B, sizeof(int) * n);
	qsort(A, m + n, sizeof(int), compare);
}
//
void merge2(int* A, int m, int* B, int n)
{
	int end = m + n - 1;
	int endA = m - 1;
	int endB = n - 1;
	while (end >= 0)
	{
		//如果endA或endB<0 -> 此时下标越界，用-101表示
		int numA = endA < 0 ? -101 : A[endA];
		int numB = endB < 0 ? -101 : B[endB];
		if (numA > numB)
		{
			A[end] = A[endA];
			end--; endA--;
		}
		else
		{
			A[end] = B[endB];
			end--; endB--;
		}
	}
}
//
//int main()
//{
//	int A[6] = { 4,5,6 };
//	int B[] = { 1,2,3 };
//	merge2(A,3,B,3);
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	return 0;
//}