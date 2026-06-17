// area of a square


#include<iostream>
using namespace std;

class square{
public:
	int a;

	void input()
	{
		cout<<"Enter side = ";
		cin>>a;
	}

	void print()
	{
		cout<<"Side = "<<a<<endl;
	}

	void area()
	{
		cout<<"Area = "<<a*a<<endl;
	}
};

int main()
{
	square s;

	s.input();
	s.print();
	s.area();
	return 0;
}
