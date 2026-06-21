//Inheritance - simple

#include<iostream>
using namespace std;

class math{
public:
	int a,b;

	void getdata(){
		cout<<"a: ";
		cin>>a;

		cout<<"b: ";
		cin>>b;
	}

	void display(){
		cout<<"Number: "<<a<<", "<<b<<endl;
	}
};

class arithmetic : public math
{
public:
	void add(){
		cout<<"add: "<<(a+b)<<endl;
	}
	void sub(){
		cout<<"sub: "<<(a-b)<<endl;
	}
	void mul(){
		cout<<"mul: "<<(a*b)<<endl;
	}
	void div(){
		cout<<"div: "<<(a/b)<<endl;
	}
};


int main(){
	arithmetic a1;

	a1.getdata();
	cout<<endl;
	a1.display();
	a1.add();
	a1.sub();
	a1.mul();
	a1.div();

	return 0;
}
