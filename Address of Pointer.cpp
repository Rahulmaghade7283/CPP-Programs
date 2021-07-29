#include<iostream>
using namespace std;
int main()
{
	int a=100;
	int* p;
	int** q;
	int*** r;
	p=&a;
	q=&p;
	r=&q;
	
	cout<<"\n a="<<*&a;
	cout<<"\n Address of a="<<&a;
	cout<<"\n a=",a;
	
	cout<<"\n Addreass of p="<<&p;
	cout<<"\n p="<<*&p;
	cout<<"\n a="<<*p;
	cout<<"\n a="<<**q;
	cout<<"\n a="<<***r;
	
	return 0;
}
