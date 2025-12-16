//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int dayOfWeek[][13] = {
//	{0,31,28,31,30,31,30,31,31,30,31,30,31},
//	{0,31,29,31,30,31,30,31,31,30,31,30,31},
//};
//
//int isLeapYear(int year)
//{
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int year = 0, month = 0;
//	scanf("%d %d", &year, &month);
//	printf("%d", dayOfWeek[isLeapYear(year)][month]);
//	return 0;
//}