//Basic virtual function

#include<iostream>
using namespace std;

class parent{
public:
	virtual void show(){
		cout<<"Parent "<<endl;
	}
};
class child : public parent{
public:
	void show(){
		cout<<"Child "<<endl;
	}
};
int main(){
	parent *p;
	child c;

	p = &c;
	p->show();
}
