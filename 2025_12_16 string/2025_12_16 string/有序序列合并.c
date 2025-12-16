//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int arr1[1000] = { 0 }, arr2[1000] = { 0 };
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < b; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int i = 0, j = 0;
//	while (i < a && j < b)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else if (arr1[i] > arr2[j])
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			i++;
//			j++;
//		}
//	}
//	while (i < a)
//	{
//		printf("%d ", arr1[i]);
//		i++;
//	}
//	while (j < b)
//	{
//		printf("%d ", arr2[j]);
//		j++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}