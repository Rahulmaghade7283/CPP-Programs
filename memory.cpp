#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"\n Enter the size:";
	cin>>size;
	int *p=NULL,*q=NULL,i;
	p=new int [size];
	q=p;
	cout<<"\n Enter any"<<size<<"values";
	for(i=0;i<size;i++,p++)
	cin>>*p;
	cout<<"\n outoff First loop";
	q=p;
	for(i=0;i<size;i++,q++)
	cout<<*q;
	delete[]p;
	cout<<"\n Welcome to DMA";
	return 0;
}
