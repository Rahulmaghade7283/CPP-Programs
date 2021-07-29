#include<iostream>
using namespace std;
void swap (int*,int*);
int main()
{
	int a=10,b=20;
	 cout<<"\n before swap:"<<a;
	 cout<<"\n before swap:"<<b;
	swap(&a,&b);
	
 	cout<<"\n after swap:"<<a;
 	cout<<"\n after swap:"<<b;
}
void swap(int*p,int*q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
