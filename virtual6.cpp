//pure virtual function

#include<iostream>
using namespace std;

class shape{
public:
	virtual void area() = 0;
};

class circle : public shape{
public:
	int r;
	void area(){
		cout<<"Radius : ";
		cin>>r;

		cout<<"Area of circle = "<<3.14*r*r<<endl;
	}
};
int main(){
	circle c;
	c.area();
	return 0;
}

