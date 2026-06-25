//Pure virtual function

#include<iostream>
using namespace std;

class shape{
public:
	virtual void area() = 0;
};
class circle : public shape{
public:
	void area(){
		cout<<"Circle area"<<endl;
	}
};
int main(){
	circle c;
	c.area();
}
