//constructor with initializing data

#include<iostream>
using namespace std;

class student
{
public:
	int roll;

	student()
	{
		cout<<"Enter roll no: ";
		cin>>roll;
	}
	void display()
	{
		cout<<"Roll = "<<roll<<endl;
	}

};


int main()
{
	student s;
	s.display();

	return 0;
}
