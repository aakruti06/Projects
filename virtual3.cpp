//Student result

#include<iostream>
using namespace std;

class student{
public:
	virtual void result(){
		cout<<"Result"<<endl;
	}
};
class pass : public student{
public:
	void result(){
		cout<<"PASS"<<endl;
	}
};
int main(){
	student *s;
	pass p;
	s = &p;
	s->result();
}
