//Multiple inheritance

#include<iostream>
using namespace std;

class emp{
protected:
	string name;
};

class dept{
public:
	string d;
};

class manager : public emp, public dept{
public:
	void getdata(){
		cout<<"Enter name : ";
		cin>>name;
		cout<<"Enter dept : ";
		cin>>d;
	}
	void display(){
		cout<<"Name : "<<name<<endl;
		cout<<"Dept : "<<d<<endl;
	}
};

int main(){
	manager a1;
	a1.getdata();
	a1.display();

	return 0;
}
