// virtual function 
// sq and cube

#include<iostream>
using namespace std;

class number{
public:
	int s;
	virtual void cal(){
		cout<<"Enter s :";
		cin>>s;
		cout<<"Square : "<<s*s<<endl;
	}
};

class cube : public number{
public:
	void cal(){
		cout<<"Enter s :";
		cin>>s;
		cout<<"Cube : "<<s*s*s<<endl;
	}
};
int main(){
	number *n;
	number o;
	cube c;

	n = &o;
	n->cal();

	n = &c;
	n->cal();

	return 0;
}
