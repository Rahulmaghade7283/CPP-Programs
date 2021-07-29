#include<iostream>
using namespace std;
int main()
{
	int a,b,t;
	cout<<"\n enter the variable= ";
	cin>>a>>b;
	
	cout<<"\n enter the before swapping a is="<<a;
    cout<<"\n enter the before swapping b is="<<b;
	t=a;
	a=b;
	b=t;
	cout<<"\n enter the after swapping is="<<a<<b;
	//cout<<"\n enter the after swapping b is="<<b;
	return 0;
	} 
