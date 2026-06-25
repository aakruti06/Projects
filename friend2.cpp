//friend function

#include<iostream>
using namespace std;

class numbers{
private:
	int a,b;
public:
	void getdata(){
		cout<<"Enter two numbers: ";
		cin>>a>>b;
	}
	friend void sum(numbers c);
	friend void sub(numbers d);
	friend void mul(numbers e);
	friend void div(numbers f);
};

void sum(numbers c){
	cout<<"Sum = "<<(c.a + c.b)<<endl;
	}
void sub(numbers d){
	cout<<"Sub = "<<(d.a - d.b)<<endl;
}
void mul(numbers e){
	cout<<"Mul = "<<(e.a * e.b)<<endl;
}
void div(numbers f){
	cout<<"Div = "<<(f.a / f.b)<<endl;
}

int main(){
	numbers n1;
	n1.getdata();

	sum(n1);
	sub(n1);
	mul(n1);
	div(n1);

	return 0;
}

