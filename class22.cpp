//constrcutor overloading

#include<iostream>
using namespace std;


class student{
public:
	int roll;

	student(){
		roll = 0;
		cout<<"Default constructor"<<endl;
	}

	student(int r){
		roll = r;
		cout<<"Parameterized constructor"<<endl;
	}

	void display(){
		cout<<"Roll = "<<roll<<endl;
	}

	~student(){
		cout<<"Destructor"<<endl;
	}
};

int main(){

	student s1;
	student s2(5);

	s1.display();
	s2.display();
	return 0;
}
