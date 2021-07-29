#include<iostream>
using namespace std;
void fun();
int main()
{
	int* p;
	int a=10;
	p=&a;
	cout<<"\n a="<<a;
	cout<<"\n a="<<*&a;
	cout<<"\n a="<<&a;
	cout<<"\n *p="<<*p;
	
	return 0;
} 
