// STUDENT MANAGEMENT SYSTEM

/*
	DEFAULT CONSTRUCTOR
	PARAMETERIZED CONSTRUCTOR
	COPY CONSTRUCTOR
	ARRAY OF OBJECTS
	DISPLAY STUDENT INFORMATION
	DESTRUCTOR
*/

#include<iostream>
using namespace std;

class student{
private:
	int roll;
	string name;
	int marks;

public:
	student(){
		roll = 1;
		name = "AA";
		marks = 90;

		cout<<"Default Constructor"<<endl;
	}
	student(int r,string n,int m){
		roll=r;
		name=n;
		marks=m;
		cout<<"Parameterized constructor"<<endl;
	}
	student(const student &st){
		roll = st.roll;
		name = st.name;
		marks = st.marks;
		cout<<"Copy constructor"<<endl;
	}
	void display(){
		cout<<"Roll: "<<roll<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Marks: "<<marks<<endl;
		cout<<endl;
	}
	~student(){
		cout<<"Destructor"<<endl;
	}
};
int main(){

	cout<<"\n Student 1\n";
	student s1;

	cout<<"\n Student 2\n";
	student s2(2,"BB",95);

	cout<<"\n Student 3\n";
	student s3(s2);

	cout<<"\n Displaying data\n\n";

	s1.display();
	s2.display();
	s3.display();

	return 0;
}
