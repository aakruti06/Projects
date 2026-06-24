//subtraction operator overloading

#include<iostream>
using namespace std;

class number{
public:
	int n;
	number(int x){
		n = x;
	}
	number operator - (number s)
	{
		return number(n - s.n);
	}
	void display(){
		cout<<n<<endl;
	}
};
int main(){
	number a(15);
	number b(5);

	number c = a-b;
	c.display();
	return 0;
}
