//// constructing vectors 
//#include <iostream> 
//#include <vector>
//
//int main() 
//{  
//	// constructors used in the same order as described above:  
//	std::vector<int> first;                                
//	// empty vector of ints  
//	std::vector<int> second (4,100);                      
//	// four ints with value 100  
//	std::vector<int> third (second.begin(),second.end());  
//	// iterating through second  
//	std::vector<int> fourth (third);                       
//	// a copy of third
//
//	// 下面涉及迭代器初始化的部分，我们学习完迭代器再来看这部分  
//	// the iterator constructor can also be used to construct from arrays:  
//	int myints[] = {16,2,77,29};  
//	std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
//
//	std::cout << "The contents of fifth are:";
//	for (std::vector<int>::iterator it = fifth.begin();it != fifth.end(); ++it)
//		std::cout << ' ' << *it;
//	std::cout << '\n';
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//
//void PrintVector(const vector<int>& v)
//{
//	//使用const迭代器进行遍历
//	vector<int>::const_iterator it = v.cbegin();
//	while (it != v.cend())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}
////int main()
////{
////	//使用push_back插入4个数据
////	vector<int> v;
////	v.push_back(1);
////	v.push_back(2);
////	v.push_back(3);
////	v.push_back(4);
////
////	//使用迭代器进行遍历打印
////	vector<int>::iterator it = v.begin();
////	while (it != v.end())
////	{
////		cout << *it << " " ;
////		++it;
////	}
////	cout << endl;
////
////	//使用迭代器进行修改
////	it = v.begin();
////	while (it != v.end())
////	{
////		*it *= 2;
////		++it;
////	}
////
////	//使用反向迭代器进行遍历再打印
////	vector<int>::reverse_iterator rit = v.rbegin();
////	while (rit != v.rend())
////	{
////		cout << *rit << " ";
////		++rit;
////	}
////	cout << endl;
////
////	PrintVector(v);
////	system("pause");
////	return 0;
////}
//
//int main()
//{
//	////size_t sz;
//	////std::vector<int> foo;
//	////sz = foo.capacity();
//	////std::cout << "making foo grow:\n";
//	////for (int i = 0; i < 100; ++i)
//	////{
//	////	foo.push_back(i);
//	////	if (sz != foo.capacity())
//	////	{
//	////		sz = foo.capacity();
//	////		std::cout << "capacity changed: " << sz << '\n';
//	////	}
//	////}
//	//
//	//
//	//std::vector<int>myvector;
//	//for (int i = 1; i < 10; i++)
//	//{
//	//	myvector.push_back(i);
//	//}
//	//myvector.resize(5);
//	//myvector.resize(8, 100);
//	//myvector.resize(12);
//	//std::cout << "myvector contains:";
//	//for (int i = 0; i < myvector.size(); i++)
//	//	std::cout << ' ' << myvector[i];
//	//std::cout << '\n';
//	
//	//push_back/pop_back
//	int a[] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	v.pop_back();
//	v.pop_back();
//
//	it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//		system("pause");
//		return 0;
//}

//find/insert/erase
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	
//	//使用find查找3所在位置的iterator
//	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
//
//	//在pos位置之前插入30
//	v.insert(pos,30);
//
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	pos = find(v.begin(), v.end(), 3);
//	//删除pos位置的数据
//	v.erase(pos);
//
//	it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

// operator[]+index 和 C++11中vector的新式for+auto的遍历 
// vector使用这两种遍历方式是比较便捷的。
int main()
{
	int a[] = { 1, 2, 3, 4 };
	vector<int> v(a, a + sizeof(a) / sizeof(int));
	
	////通过[]读写第0个位置
	//v[0] = 10;
	//cout << v[0] << endl;

	////通过[i]的方式遍历vector
	//for (size_t i = 0; i < v.size(); ++i)
	//{
	//	cout << v[i] << " ";
	//}
	//cout << endl;

	//vector<int> swapv;
	//swapv.swap(v);

	//cout << "v data:";
	//for (size_t i = 0; i < v.size(); ++i)
	//{
	//	cout << v[i] << " ";
	//}
	//cout << endl;

	//cout << "swapv data:";
	//for (size_t i = 0; i < swapv.size(); ++i)
	//{
	//	cout << swapv[i] << " ";
	//}
	//cout << endl;

	//C++支持的新式遍历
	for (auto x : v)
	{
		cout << x << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}