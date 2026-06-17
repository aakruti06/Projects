// destructor

#include<iostream>
using namespace std;

class student
{
public:
	student(){
		cout<<"Constructor called"<<endl;
	}
	~student(){
		cout<<"Destructor called"<<endl;
	}

};

int main()
{
	student s;

	return 0;
}
