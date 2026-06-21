// Inheritance Basic 1

//simple inheritance 

#include<iostream>
using namespace std;

class parent{
public:
	void show(){
		cout<<"parent function"<<endl;
	}
};

class child : public parent{

};


int main()
{
	child c;
	c.show();
	return 0;
}
