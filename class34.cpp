//private, public & protected

#include<iostream>
using namespace std;

class person{
public:
	string name;
private:
	int salary;
protected:
	int age;

public:
	void getdata(int s,int a){
		salary = s;
		age = a;
	}

	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Salary: "<<salary<<endl;
		cout<<"Age: "<<age<<endl;
	}

};

int main(){

	person p;
	p.name = "Alex";
	p.getdata(90000,31);
	p.display();
	return 0;
}
