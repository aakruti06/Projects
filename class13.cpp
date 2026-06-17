//parameterized constructor

#include<iostream>
using namespace std;

class student{
public:
	int roll;

	student(int r)
	{
		roll = r;
	}

	void display()
	{
		cout<<"Roll = "<<roll<<endl;
	}
};

int main()
{
	student s(120);
	s.display();

	return 0;
}
