// Basic operator overloading

#include<iostream>
using namespace std;

class number{
public:
	int n;

	number(int x){
		n = x;
	}
	number operator +(number object){
		return number(n + object.n);
	}
	void display(){
		cout<<n<<endl;
	}
};

int main(){
	number a(10);
	number b(20);

	number c = a + b;

	c.display();

	return 0;
}
