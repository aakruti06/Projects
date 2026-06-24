//function overloading

#include<iostream>
using namespace std;

class display{
public:
	void show(int x){
		cout<<"Interger = "<<x<<endl;
	}
	void show(float x){
		cout<<"Float = "<<x<<endl;
	}
	void show(string x){
		cout<<"String = "<<x<<endl;
	}
};

int main(){

	display d;
	d.show(5);
	d.show(5.5f);
	d.show("Alex");

	return 0;
}
