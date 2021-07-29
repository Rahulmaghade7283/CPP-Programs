#include<iostream>
using namespace std;
 //void swap (int,int)
int main()
{
	int a=10,b=20;
	cout<<"\n before swap ="<<a<<b;
	swap(a,b);
	
	cout<<"\n after swap ="<<a<<b;
}
void swap(int a,int b)
{
	int t;
	t=a;
	b=a;
	b=t;
}

