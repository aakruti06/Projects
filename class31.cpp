//constructor types

#include<iostream>
using namespace std;

class number{
public:
	int n;
	number(){
		n=10;
		cout<<"Default constructor"<<endl;
	}
	number(int x){
		n = x;
		cout<<"Parameterized constructor"<<endl;
	}
	number(const number &o){
		n = o.n;
		cout<<"Copy constructor"<<endl;
	}
	void display(){
		cout<<"n="<<n<<endl;
	}
};


int main(){
	number a;
	number b(5);
	number c(b);

	c.display();
	return 0;
}
