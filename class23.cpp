// 3 constructors

#include<iostream>
using namespace std;

class number{
public:
	number(){
		cout<<"Default Constructor"<<endl;
	}

	number(int num){
		cout<<"1 Argument Constructor"<<endl;
		cout<<"Square = "<<num*num<<endl;
		cout<<"Cube = "<<num*num*num<<endl;
	}

	number(int a, int b)
	{
		cout<<"2 Argument Constructor"<<endl;
		cout<<"Sum = "<<(a+b)<<endl;
	}

	~number(){
		cout<<"Destructor"<<endl;
	}
};

int main(){

	number x1;
	number x2(3);
	number x3(4,4);
	return 0;
}
