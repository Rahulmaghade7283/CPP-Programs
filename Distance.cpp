#include<iostream>
using namespace std;
int main()
{
	int km,m,cm,mm;
	cout<<"\n enter the distance in km=";
	cin>>km;
	
	m=km*1000;
	cm=m*100;
	mm=cm*10;
	
	cout<<"\n Distance in meter="<<m;
	cout<<"\n Distance in centimeter="<<cm;
	cout<<"\n Distance in milimeter="<<mm;
}
