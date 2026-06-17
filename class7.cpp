//area of rectangle

#include<iostream>
using namespace std;

class rectangle{
public:
	int lt,bt;

	void getdata()
	{
		cout<<"Enter length and breadth : ";
		cin>>lt>>bt;
	}

	void display()
	{
		cout<<lt<<", "<<bt<<endl;
	}

	void area()
	{
		cout<<"Area = "<<lt*bt<<endl;
	}
};

int main()
{
	rectangle r;

	r.getdata();
	r.display();
	r.area();
	return 0;
}
