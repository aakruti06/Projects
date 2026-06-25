//pure function

#include<iostream>
using namespace std;

class wood{
public:
	virtual void furniture() = 0;
};
class table : public wood{
public:
	void furniture(){
		cout<<"Table "<<endl;
	}
};
class chair : public wood{
public:
	void furniture(){
		cout<<"4 Chairs"<<endl;
	}
};
class cot : public wood{
public:
	void furniture(){
		cout<<"Cot"<<endl;
	}
};
int main(){
	wood *w1;
	table t;
	w1 = &t;
	w1->furniture();

	chair c;
	w1 = &c;
	w1->furniture();

	cot c1;
	w1 = &c1;
	w1->furniture();

	return 0;
}
