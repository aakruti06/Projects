//Basic polymorphism - function overloading
 
#include<iostream>
using namespace std;

class math{
public:
	void add(int a,int b){
		cout<<"Sum of 2 numbers = "<<(a+b)<<endl;
	}
	void add(int a,int b,int c){
		cout<<"Sum of 3 numbers = "<<(a+b+c)<<endl;
	}
};

int main(){

	math m;
	m.add(2,3);
	m.add(6,2,2);

	return 0;
}
