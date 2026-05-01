#include <iostream>
#include <vector>
using namespace std;

//int main()
//{
//	vector<int> v1;
//	cout << v1.size() << endl;
//	v1.reserve(10);
//	cout << v1.size() << endl;
//	/*v1.push_back(2);
//	v1.push_back(2);
//	v1.push_back(1);*/
//	
//	int sum = 0;
//	for (auto& e : v1)
//	{
//		cout << e << " ";
//	}
//	cout << sum << endl;
//	return 0;
//}

int main()
{
	vector<int> v1;
	v1.push_back(100);
	v1.push_back(100);
	v1.push_back(100);
	v1.push_back(100);
	v1.push_back(100);
	v1.push_back(100);

	auto it = v1.begin() + 3;
	v1.insert(it, 40);
	for (auto e : v1)
	{
		cout << e << " ";
	}

	//无法打印：insert以后，it失效
	// cout << *it << endl;
}