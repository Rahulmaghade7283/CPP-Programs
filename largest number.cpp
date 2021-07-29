#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n Enter the number";
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	cout<<"\n the largest number is:"<<a;
	
	if(b>a && b>c)
	cout<<"\n the largest number is:"<<b;
	
	if(c>a && c>b)
	cout<<"\n the largest number is:"<<c;
	
}
