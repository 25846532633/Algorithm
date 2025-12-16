#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	for (int i = 10000; i < 99999; i++)
	{
		int sum = 0;
		int j = 1;
		int digit = i;
		while (digit > 9)
		{
			int t = pow(10, j);
			int temp1 = i % t;//655 -> 5; 655->55
			int temp2 = i / t;//655 -> 65;655->6
			sum += temp1 * temp2;//拆分求和
			j++;
			digit /= 10;//控制次数 - 5位数更新4次
			//所以最后的值必须>9 - 也就是不能小于10

		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}