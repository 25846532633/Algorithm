#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

void test1()
{
	//1.默认构造
	string s1;//(1)default
	cout <<"s1:" << s1 << endl;

	//4.5:利用C的字符串进行初始化
	string s2 = "abced";//(4)c-string
	cout << "s2:" << s2 << endl;
	string s7("abced", 3); //(5) from sequence
	cout << "s7:" << s7 << endl;

	//2.拷贝构造
	string s3(s2);//(2) copy - 拷贝构造
	string s6 = s3;
	cout << "s3:" << s3 << endl;
	cout << "s6:" << s6 << endl;
	
	//3.求字串
	string s4(s2, 2); //(3) substring
	string s5(s2, 2, 2);
	cout << "s4:" << s4 << endl;
	cout << "s5:" << s5 << endl;
	
	//6.利用字符填充
	string s8(10, 'x');//(6) fill - C字符
	cout << "s8:" << s8 << endl;

	//7.iterator遍历 - 区间左闭右开
	string s9(s8.begin(), s8.end()-1);
	cout << "s9:" << s9 << endl;

	//8.operator
	string s10 = s9;
	string s11 = "abced";
	string s12;
	s12 = 'c';
	cout << "s10:" << s10 << endl;
	cout << "s11:" << s11 << endl;
	cout << "s12:" << s12 << endl;	
}


void test2()
{
	string s1("abcde");
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;

	const string s2 = "abc";
	for (int i = 0; i < s2.size(); i++)
	{
		cout << s2[i] << " ";
	}
	cout << endl;

	string str("Test string");//获取特定下标的字符
	cout << str.at(2) << endl;

	cout << str.front() << endl;//获取头元素
	cout << str.back() << endl;//获取尾元素

}

void test3()
{
	string s1("abced");
	cout << s1.size() << endl;
	cout << s1.length() << endl;
	cout << s1.max_size() << endl;

	string s2("abc");
	s2.resize(20);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl;

	cout << "--------------" << endl;
	string s3("cdefghi");
	cout << s3.size() << endl;
	cout << s3.capacity() << endl;
	s3.reserve(20);
	cout << s3.size() << endl;
	cout << s3.capacity() << endl;
	cout << s3.empty() << endl;
	
	s3.clear();
	cout << s3.empty() << endl;

}

void test4()
{
	/*string s5("hello");
	for (auto it = s5.begin(); it != s5.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	cout << "---------" << endl;
	for (auto ch : s5)
	{
		cout << ch << " ";
	}
	cout << endl;

	cout << "---------" << endl;
	for (auto& ch : s5)
	{
		cout << ch << " ";
	}
	cout << endl;

	cout << "---------" << endl;
	string::iterator start = s5.begin() + 1;
	while (start != s5.end())
	{
		cout << *start << " ";
		start++;
	}
	cout << endl;*/

	cout << "-------------" << endl;
	string s6("world");
	for (auto it = s6.rbegin(); it != s6.rend(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	const string s7 = "world";
	for (auto it = s6.cbegin(); it != s6.cend(); it++)
	{
		cout << *it << " ";
	}
}

void test5()
{
	//1.operator+=
	//string s1("happy");
	/*s1 += "hand";
	cout << s1 << endl;*/
	//string s2("world");
	/*s1 += s2;
	cout << s1 << endl;
	s2 += 'x';
	cout << s2 << endl;*/
	
	//2.append
	//s2.append(s1); //(1)string - 直接添加string
	//cout <<"s2:"<< s2 << endl;
	//string s3("pay");
	//s3.append(s1, 2); //(2)substring - 从s1的第三个字符一直到最后一个字符
	//cout << "s3:" << s3 << endl;
	//string s4("hello");
	//s4.append("happy"); //(3)c-string
	//cout << "s4:" << s4 << endl;
	//string s5("hello");
	//s5.append(" world", 3); //(4)buffer
	//cout << "s5:" << s5 << endl;
	//string s6("sdasda"); //(5)fill - 普通字符
	//s6.append(10, 'x');
	//cout << "s6:" << s6 << endl; 
	//string s7; //(6) range - 迭代器叠加
	//s7.append(s6.begin(), s6.end());
	//cout << "s7:" << s7 << endl;

	////3、push_back - 插入一个字符
	//s7.push_back('l');
	//cout << s7 << endl;

	//4.insert
	//string s1("hello");//(3)c-string
	//s1.insert(2, "ha");
	//cout << "s1:" <<s1<< endl;//hehallo
	//string s2;
	//s2.insert(0, s1, 3);//(2)substring
	//cout << "s2:" << s2 << endl;
	//s2.clear();
	//s2.insert(0, s1, 3, 6);
	//cout << "s2:" << s2 << endl;//从下标为3的位置获取6个字符(溢出则直接获取后面的全部）
	//string s3;//(1)string
	//s3.insert(0, s2);
	//cout << "s3:" << s3 << endl;
	//string s4;
	//s4.insert(0, "abcdef", 3);//(4)buffer - 从0开始，插入字符串的前三个字符
	//cout << "s4:" << s4 << endl;
	//string s5("abc");//(5)fill - 插入C字符
	//s5.insert(0, 2, 'c');
	//cout << "s5:" << s5 << endl;
	
	////5.erase
	//string s3("hello");//1.删除指定位置之后一定个数的
	//s3.erase(0, 2);
	//cout << "s3:" << s3 << endl;
	//string s4("hello world");//2.删除迭代器指定的字符
	//s4.erase(s4.begin() + 3);
	//cout << "s4:" << s4 << endl;
	//string s5("aklasdjkasld");//3.删除迭代器范围内的字符（包括迭代器当前指向的元素）
	//s5.erase(s5.begin() + 2, s5.end());
	//cout << "s5:" << s5 << endl;

	//6.replace
	string s4("happy"); //1.string
	s4.replace(1, 3, "abc");
	cout << "s4:" << s4 << endl;
	string s5("happy");//2.substring
	string s6("jklui");
	s5.replace(2, 3, s6);
	cout << "s5:" << s5 << endl;
	s6.replace(0, 3, "abc");
	cout << "s6:" << s6 << endl;
	swap(s5, s6);
	cout << "-----------" << endl;
	cout << "s5:" << s5 << endl;
	cout << "s6:" << s6 << endl;
}

void test6()
{
	//std::string str("Please split this sentence into tokens");
	//char* cstr = new char[str.length() + 1];
	//strcpy(cstr, str.c_str());
	//// cstr now contains a c-string copy of str
	//char* p = std::strtok(cstr, " ");
	//while (p != 0)
	//{
	//	std::cout << p << '\n';
	//	p = std::strtok(NULL, " ");
	//}
	//delete[] cstr;

	//char buffer[20];
	//string str("TEST STRING");
	//size_t length = str.copy(buffer, 6, 5);//从下标为5开始拷贝六个元素到buffer中
	//buffer[length] = '\0';
	//cout << buffer << endl;

	string s2("ello");
	string s3("hello");
	int n = s3.find(s2);
	cout << n << endl;
	int h = s3.find("elo");
	cout << h << endl;

}

int main()
{
	//test1();//构造、operator=
	//test2();//元素访问
	//test3();//Capacity
	//test4();
	//test5();//Modifier
	test6();
	return 0;
}