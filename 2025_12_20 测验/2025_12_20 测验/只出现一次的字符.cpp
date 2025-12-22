//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//
int FirstNotRepeatingChar(char* str)
{
	int arr[128] = { 0 };
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		arr[str[i]]++;
	}
	for (int i = 0; i < len; i++)
	{
		if (arr[str[i]] == 1)
			return i;
	}
	return -1;
}
//
//
//int main()
//{
//	return 0;
//}