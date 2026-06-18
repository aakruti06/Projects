//copy constructor

#include<iostream>
using namespace std;

class number{
public:
	int n;
	number(int num){
		n = num;
		cout<<n<<endl;
	}
	number(const number &t){
		n = t.n;
		cout<<n<<endl;
	}
	//void display(){
};


int main()
{
	number m(10);
	number z(m);
	return 0;
}
