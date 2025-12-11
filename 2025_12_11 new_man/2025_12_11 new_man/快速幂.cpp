#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

long long safe_pow_mod(long long a, long long n, long long m) {
    if (m <= 0) return 0; // 模数必须为正
    if (n == 0) return 1 % m; // 任何数的0次方为1

    a = (a % m + m) % m; // 处理负数底数

    if (n < 0) {
        // 负指数需要逆元，这里简化处理
        if (a == 0) return 0; // 0的负指数未定义
        // 实际需要计算逆元，这里返回0表示不支持
        return 0;
    }

    long long result = 1;
    while (n > 0) {
        if (n & 1) {
            result = (result * a) % m;
        }
        a = (a * a) % m;
        n >>= 1;
    }
    return result;
}


#include <stdio.h>

int main() {
    int a,n,m;
    int result = 1;      // 存储最终结果，初始为1 (2^0 = 1)
    scanf("%d %d %d", &a,&n,&m);  // 读取指数n、底数a、模数m
    if (m <= 0)
        result = 0;// 模数必须为正
    if (n == 0) 
        result = 1 % m; // 任何数的0次方为1

    // 快速幂算法：将n转换为二进制进行处理
    while (n > 0) {
        // 如果当前二进制位为1，则将结果乘以当前的base
        if (n & 1) {
            result = (result * a) % m; //每次乘法都取模，避免数值过大
        }

        // base平方，为处理下一位做准备
        a = (a * a) % m;

        // n右移一位，相当于n = n / 2
        n >>= 1;
    }

    // 输出结果
    printf("%d\n", result);

    return 0;
}