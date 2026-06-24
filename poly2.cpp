//polymorphism - function overloading

#include<iostream>
using namespace std;

class areas{
public:
	void area(int side){
		cout<<"Area of Square : "<<(side*side)<<endl;
	}
	void area(int l, int b){
		cout<<"Area of Rectangle : "<<(l*b)<<endl;
	}
};

int main(){
	areas a;
	a.area(5);
	a.area(4,6);

	return 0;
}



