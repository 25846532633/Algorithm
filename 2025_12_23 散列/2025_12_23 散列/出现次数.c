//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
////int main()
////{
////	int arr[1000] = { 0 };//初始化计数数组
////	int n = 0;
////	scanf("%d", &n);
////	for (int i = 0; i < n; i++)
////	{
////		int temp = 0;
////		scanf("%d", &temp);
////		arr[temp]++;
////	}
////	for (int i = 0; i < 100; i++)
////	{
////		if (arr[i])
////		{
////			printf("%d %d\n", i, arr[i]);
////		}
////	}
////	return 0;
////}
//
//int main()
//{
//	char str[101];//字符串长度
//	int hashTable[26] = { 0 };//26个字母
//	
//	scanf("%s", str);
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		hashTable[str[i] - 'a']++;
//		//printf("%d", str[i] - 'a');
//	}
//	for (int i = 0;i < 26;i++)
//	{
//		int cnt = hashTable[i];
//		if (cnt)
//		{
//			printf("%c %d\n", 'a' + i, cnt);
//		}
//	}
//}