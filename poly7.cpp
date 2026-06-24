//Basic operator overloading

#include<iostream>
using namespace std;

class number{
public:
	int n;
	number(int x){
		n = x;
	}
	number operator + (number o){
		return number(n + o.n);
	}
	void display(){
		cout<<n<<endl;
	}
};
int main(){
	number a(15);
	number b(15);

	number c = a + b;
	c.display();
	return 0;
}
