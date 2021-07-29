#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,m4,m5,per;
	cout<<"\n enter five subjecr marks";
	cin>>m1>>m2>>m3>>m4>>m5;
	
	per=(m1+m2+m3+m4+m5)/5;
	
	if(per>=75)
	cout<<"\n Distinction";
	
	else if(per<75 && per>=65)
	cout<<"\n A grade";
	
	else if(per<65 && per>=50)
	cout<<"\n B grade";
	
	else if(per<55 && per>=35)
	cout<<"\n C grade";
	
	else
	cout<<"\n unsuccessful";
	return 0;
}
	

