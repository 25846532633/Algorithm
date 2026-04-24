#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//	string name;
//	while (getline(cin, name))
//	{
//		size_t pos = name.find_last_of(" ");
//		cout << name.size() << endl;
//		cout << pos << endl;
//		cout << name.size() - pos-1 << endl;
//	}
//	return 0;
//}



//int main()
//{
//	int k = 2;
//	string s("abcdefg");
//	auto it = s.begin();
//	auto end = s.end();
//
//	//用for的时候会出现溢出报错
//	//for (auto it = s.begin(); it != end && it < end; it += 2 * k)
//	//{
//	//	if (it < end - 2 * k - 1)
//	//	{
//	//		reverse(it, it + k);
//	//	}
//	//	else //其余情况直接反转 
//	//	{
//	//		reverse(it,it+k);
//	//	}
//	//}
//
//
//	while (it != end && it < end)
//	{
//		if (it < end - 2 * k - 1)  //1、不需要判断后面有没有完整的2k段，毕竟只需要反转k个字符 //2.你可能end-2*k-1比字符串还大
//			reverse(it, it + k); //没判断剩余长度够不够
//		else
//		{
//			reverse(it, it + k);
//			break;
//		}
//		it += 2 * k;
//	}
//	cout << s << endl;
//	return 0;
//}


/*nt main()
{
	string s("happy world Monthday");
	int i = 0;
	while(i < s.size())
	{
		size_t end = s.find(" ", i);
		if (end > s.size())
			end = s.size();
		reverse(s.begin()+i, s.begin()+ i+(end - i));

		i += end + 1;
	}
	cout << s << endl;
	return 0;
}*/

int main()
{
	string num1("123");
	string num2("256");
	
	int l1 = num1.size() - 1;
	int l2 = num2.size() - 1;

}