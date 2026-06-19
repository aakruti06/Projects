// EMPLOYEE MANAGEMENT SYSTEM

#include<iostream>
using namespace std;

class employee{
private:
	int salary;
protected:
	int experience;
	string designation;
public:
	string name;

	void getdata(){
		cout<<"Enter name: ";
		cin>>name;

		cout<<"Enter salary: ";
		cin>>salary;

		cout<<"Enter experience (years): ";
		cin>>experience;

		cout<<"Enter designation: ";
		cin>>designation;
	}

	void setdata(string n, int sal, int exp, string dg){
		name = n;
		salary = sal;
		experience = exp;
		designation = dg;
	}

	void display(){
		cout<<"Name        : "<<name<<endl;
		cout<<"Salary      : "<<salary<<endl;
		cout<<"Experience  : "<<experience<<endl;
		cout<<"Designation : "<<designation<<endl;
	}

	void increment(){
		if(experience >= 5){
			salary += 5000;
		}
		else{
			salary += 2000;
		}
	}
};

int main(){
	employee e;
	e.getdata();
	e.increment();
	e.display();

	cout<<endl;

	employee d;
	d.setdata("BB",90000,2,"Jr.Dev");
	d.increment();
	d.display();

	return 0;
}
