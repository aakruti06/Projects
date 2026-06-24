// Function overriding

#include<iostream>
using namespace std;

class parent{
public:
	void show(){
		cout<<"Parent function"<<endl;
	}
};
class child : public parent{
public:
	void show(){
		cout<<"Child function"<<endl;
	}
};

int main(){
	child c;
	c.show();
	return 0;
}
