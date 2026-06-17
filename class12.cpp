//class constructor with initializing


#include<iostream>
using namespace std;

class square{
public:

	int s;

	square(){
		cout<<"Enter S: ";
		cin>>s;
	}

	void display(){
		cout<<"Side of a square"<<endl;
	}

	void area(){
		cout<<"Area : "<<s*s<<endl;
	}
};


int main()
{
	square a;
	a.display();
	a.area();
	return 0;
}
