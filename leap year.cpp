#include<iostream>
using namespace std;
int main()
{
	int year;
	
	cout<<"enter the year";
	cin>>year;
	
	if(year%4==0)
	cout<<"this are the leap year";
	
	if(year%4!=0)
	cout<<"\n this are the non-leap year";
}
