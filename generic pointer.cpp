#include<iostream>
using namespace std;
int main()
{
	int a=100;
	void *p;
	
	p=&a;
	cout<<"\n a=" <<a;
	cout<<"\n Address of a="<<&a;
	
	cout<<"\n Address of p="<<&p;
	cout<<"\n p="<<*&p;
	cout<<"\n a="<<*&p;
	
	return 0;
}
