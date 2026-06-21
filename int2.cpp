//Simple  Inheritance 


#include<iostream>
using namespace std;

class number{
public:
	int n;
	void display(){
		cout<<"n = "<<n<<endl;
	}
};

class square : public number{
public:
	void sq(int a){
		cout<<"Square = "<<a*a<<endl;
	}
};

int main()
{
	number n1;
	n1.n = 10;
	n1.display();

	square s1;
	s1.n = 20;
	s1.display();
	s1.sq(6);

	return 0;
}
