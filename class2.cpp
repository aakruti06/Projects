// class with data members

#include<iostream>
using namespace std;


class student{
public:
	int roll;
	string name;
};

int main()
{
	student s;
	cout<<"Roll No: ";
	cin>>s.roll;

	cout<<"Enter name :";
	cin>>s.name;

	cout<<"Name : "<<s.name<<", Roll No : "<<s.roll<<endl;
	return 0;
}
