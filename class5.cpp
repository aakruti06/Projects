// class function input, output, addition

#include<iostream>
using namespace std;

class student{
public:
	int a,b,sum=0;

	void getdata(){
		cout<<"Enter 2 numbers: ";
		cin>>a;
		cin>>b;
	}

	void add(){
		sum = a+b;
	}

	void display(){
		cout<<"Sum : "<<sum<<endl;
	}
};

int main(){

	student s;
	s.getdata();
	s.add();
	s.display();
	return 0;
}
