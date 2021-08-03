#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"\n show of A";
			
		}
};
void anymethod(A pa)
{
	pa.show();
}
int main()
{
	std::cout<<"\n Hello World";
	//A.a
	return 0;
}
