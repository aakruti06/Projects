//constructor

#include<iostream>
using namespace std;

class student
{
public:
	student()
	{
		cout<<"Constructor called"<<endl;
	}
};

int main()
{
	student s;
	return 0;
}
