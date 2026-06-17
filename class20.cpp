//constructor and destructor

#include<iostream>
using namespace std;

class number{
public:
	int n;
	number(int a){
		n = a;
		cout<<"Constructor called"<<endl;
		cout<<"Square : "<<a*a<<endl;
		cout<<"Cube : "<<a*a*a<<endl;
	}

	~number(){
		cout<<"Destrcutor called"<<endl;
	}
};

int main()
{

	number y(5);
	number z(10);

	return 0;
}
