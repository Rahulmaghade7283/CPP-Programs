#include<iostream>
using namespace std;
int main()
{
	int a,b,t;
	cout<<"enter the two number\n";
	cin>>a>>b;
	
	cout<<"before swapping=\n"<<a<<b;
	
	t=a;
	a=b;
	b=t;
	
	cout<<"\n after swapping=\n"<<a <<b;
	
}
