// Multiplication operator overloading

#include<iostream>
using namespace std;

class number{
public:
	int n;
	number (int x){
		n = x;
	}
	number operator * (number m){
		return number(n * m.n);
	}
	void display(){
		cout<<n<<endl;
	}
};
int main(){
	number a(8);
	number b(10);
	number c = a * b;

	c.display();
	return 0;
}
