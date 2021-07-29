#include<iostream>
using namespace std;
int main()
{
	int cp,sp;
	cout<<"\n enter the cp and sp values";
	cin>>cp>>sp;
	
	if(cp<sp)
	cout<<"\n profit";
	
	if(cp>sp)
	cout<<"\n Loss";
	
	if(cp==sp)
	cout<<"\n Equal";
	
	return 0;
}
