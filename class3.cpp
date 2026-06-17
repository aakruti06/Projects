// class with member function

#include<iostream>

using namespace std;

class student
{
public:
	int roll;
	void display()
	{
		cout<<"Display function as a class member"<<endl;
		cout<<"Roll no: "<<roll<<endl;
	}
};

int main()
{
	student s;
	cout<<"Roll No: ";
	cin>>s.roll;

	s.display();

	return 0;
}

