// BOOST_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//#include <E:/boost/boost_1_70_0/boost/lexical_cast.hpp>  

//boost 学习bind,function,shared_ptr
#include <iostream>
#include <memory>
using namespace std;
class A
{
public:
	int i;
	A(int n) :i(n) {};
	~A() { cout << i << " destructed" << endl; }
};
int main()
{
	shared_ptr<A> sp1(new A(2));
	weak_ptr<A> wp(sp1);

	wp = sp1;
	cout << wp.use_count() << endl;
	sp1.reset(new A(23));
	cout << wp.use_count() << endl;
	return 0;
}

