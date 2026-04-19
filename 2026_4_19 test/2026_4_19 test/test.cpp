#include <iostream>
#include <string>
#include <vector>
using namespace std;
//
//int main()
//{
//    string str("42");
//    //1.跳过所有空格
//    int i = 0, n = str.size();
//    while (str[i++] == ' ' && i < n) i++;
//
//    // 2. 处理符号
//    int sign = 1;
//    if (i < n && (str[i] == '+' || str[i] == '-')) {
//        if (str[i] == '-')
//            sign = -1;
//        i++;
//    }
//    //3.处理
//    long result = 0;  // 用 long 防止溢出
//    while (i < n && isdigit(str[i])) {
//        result = result * 10 + (str[i] - '0');
//
//        // 4. 溢出处理
//        if (result * sign > INT_MAX) return INT_MAX;
//        if (result * sign < INT_MIN) return INT_MIN;
//        i++;
//    }
//	return 0;
//}

//int main()
//{
//    string num1("1");
//    string num2("9");
//    int size1 = num1.size(), size2 = num2.size();
//    int i = size1-1, j = size2-1;
//    string resultstr;
//    int next = 0, digit = 0;//进位
//    while (i >= 0 && j >= 0)
//    {
//        //算每个个位
//        int n1 = num1[i] - '0' ? num1[i] - '0' : 0;
//        int n2 = num2[j] - '0' ? num2[j] - '0' : 0;
//
//        int sum = n1 + n2 + next;
//        next = sum / 10;//进位
//        digit = sum % 10;//最后一位
//        resultstr += to_string(digit);
//        i--;
//        j--;
//    }
//    if (next == 1 && i == 0 && j == 0)
//        resultstr += to_string(next);
//
//    string str1;
//    while (i >= 0)
//    {
//        if (next != 0)
//        {
//            int sum = num1[i] - '0';
//            sum += next;
//            if (sum > 9)
//            {
//                str1 = to_string(sum);
//                reverse(str1.begin(), str1.end());
//            }
//            resultstr += str1;
//        }
//        else
//            resultstr += num1[i];
//        
//        i--;
//    }
//    string str2;
//    while (j >= 0)
//    {
//        if (next != 0)
//        {
//            int sum = num2[j] - '0';
//            sum += next;
//            if (sum > 9)
//            {
//                str2 = to_string(sum);
//                reverse(str2.begin(), str2.end());
//            }
//            resultstr += str2;
//        }
//        else
//            resultstr += num2[j];
//
//        j--;
//    }
//
//    reverse(resultstr.begin(), resultstr.end());
//
//    cout << resultstr << endl;
//}


int main()
{
    string s1("hello");
    vector<char> s(s1.begin(), s1.end());
    int size = s.size();
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    for (auto e : s)
    {
        cout << e << " ";
    }
    return 0;
}