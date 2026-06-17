// Class with data members

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

	s.roll = 101;
	s.name = "aa";
	cout<<"Roll No : "<<s.roll<<endl;
	cout<<"Name : "<<s.name<<endl;
	return 0;
}

