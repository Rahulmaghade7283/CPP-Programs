#include<iostream>
using namespace std;
int main()
{
	char sex,ms;
	int age;
	
	cout<<"\n Enter age,sex,marriage status";
	cin>>age>>sex>>ms;
	
	if(ms=='M')
	cout<<"\n Driver is insured";
	else
	{
		if(sex=='M')
		{
			if(age>30)
			cout<<"\n Driver is insured";
			else
			cout<<"\n driver is not insured";
		}
		else{
			if(age>25)
			cout<<"\n Driver is insured";
			else
			cout<<"\n Driver is not insured";
		}
	}
}
