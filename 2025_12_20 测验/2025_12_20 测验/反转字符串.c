//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
////#include <stdlib.h>
//char* solve(char* str)
//{
//	int len = strlen(str);
//	char* temp = (char*)malloc(sizeof(char) * (len + 1));
//	int end = len - 1;
//	int i = 0;
//	if (temp == NULL) {  // 检查内存分配是否成功
//		return NULL;
//	}
//	while (end >= 0)
//	{
//		temp[i++] = str[end--];
//	}
//	temp[i] = '\0';
//	strcpy(str, temp);//temp是本函数创建的变量，函数结束后生命周期结束
//	free(temp);
//	return str;
//}
//
//
//int main()
//{
//	char str1[20] = "abcde";
//	char* str2 = solve(str1);
//	printf("%s", str2);
//	return 0;
//}