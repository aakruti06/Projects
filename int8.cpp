//Calculator

//Number - Arithmetic - Calculator

#include<iostream>
using namespace std;

class number{
public:
	int a,b;

	void getdata(){
		cout<<"Enter number a & b : ";
		cin>>a>>b;
	}
};

class cal : public number{
public:

	char ch;

	void cal_func(){
		cout<<"Enter choice : ";
		cin>>ch;

		switch(ch){

			case 'A':
				cout<<"Sum = "<<(a+b)<<endl;break;
			case 'B':
				cout<<"Sub = "<<(a-b)<<endl;break;
			case 'C':
				cout<<"Mul = "<<(a*b)<<endl;break;
			case 'D':
				cout<<"Div = "<<(a/b)<<endl;break;
			default:
				cout<<"Invalid data"<<endl;break;
		}
	}
};

class power : public cal{
public:

	void square(){
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<"Square of a = "<<a*a<<endl;
		cout<<"Cube of b = "<<b*b*b<<endl;
	}
};

int main(){

	power p1;

	p1.getdata();
	p1.cal_func();
	p1.square();

	return 0;
}
