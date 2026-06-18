//construcotr overloading

#include<iostream>
using namespace std;

class calculator{
public:

	calculator(){
		cout<<"Default constructor"<<endl;
	}

	calculator(int a){
		cout<<"Square and Cube of "<<a<<": "<<a*a<<" & "<<a*a*a<<endl;
	}

	calculator(int a,int b){
		cout<<"Sum and Product of "<<a<<" & "<<b<<": "<<(a+b)<<" & "<<(a*b)<<endl;
	}

	~calculator(){
		cout<<"Destructor"<<endl;
	}
};
int main(){

	calculator();
	calculator(5);
	calculator(2,4);
	return 0;
}
