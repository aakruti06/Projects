// Hierarchical inheritance

#include<iostream>
using namespace std;

class person{
public:
	string name;
	void getname()
	{
		cout<<"Enter name : ";
		cin>>name;
	}
};

class student : public person{
public:
	void display_student()
	{
		cout<<"Student name : "<<name<<endl;
	}
};

class teacher : public person{
public:
	void display_teacher()
	{
		cout<<"Teacher name : "<<name<<endl;
	}
};

class employee : public person{
public:
	void display_employee()
	{
		cout<<"Employee name : "<<name<<endl;
	}
};

int main(){

	student s;
	teacher t;
	employee e;

	cout<<"\n --- Student --- \n"<<endl;
	s.getname();
	s.display_student();

	cout<<"\n --- Teacher --- \n"<<endl;
	t.getname();
	t.display_teacher();

	cout<<"\n --- Employee --- \n"<<endl;
	e.getname();
	e.display_employee();

	return 0;
}
