// class with input and output as class member function

#include<iostream>
using namespace std;

class student{
public:
	int roll;
	string name;

	void getdata()
	{
		cout<<"Enter data: ";
		cin>>roll;
	}

	void display()
	{
		cout<<"Roll : "<<roll<<endl;
	}
};

int main()
{
	student s;
	s.getdata();
	s.display();
	return 0;
};
