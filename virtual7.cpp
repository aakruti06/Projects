//employee salary

#include<iostream>
using namespace std;

class emp{
public:
	virtual void salary() = 0;
};

class manager : public emp{
public:
	void salary(){
		cout<<"Manager salary = 50000"<<endl;
	}
};

class developer : public emp{
public:
	void salary(){
		cout<<"Developer salary = 40000"<<endl;
	}
};
int main(){
	manager m;
	developer d;

	m.salary();
	d.salary();

	return 0;
}
