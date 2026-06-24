// Arithmetic operator overloading

#include<iostream>
using namespace std;

class number{
public:
	int n;

	number(int a){
		n = a;
	}
	number operator + (number p)
	{
		return number(n + p.n);
	}
	number operator - (number q)
	{
		return number(n - q.n);
	}
	number operator * (number r)
	{
		return number(n * r.n);
	}
	number operator / (number s)
	{
		return number(n / s.n);
	}
	void display()
	{
		cout<<n<<endl;
	}
};

int main(){
	number a(10);
	number b(5);

	number c = a+b;
	c.display();
	number d = a-b;
	d.display();
	number e = a*b;
	e.display();
	number f = a/b;
	f.display();

	return 0;
}
