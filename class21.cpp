// order of constructor and destructor


#include<iostream>
using namespace std;

class number{
public:
	int n;

	number(int a){
		n = a;
		cout<<"constructor"<<n<<endl;
	}

	~number(){
		cout<<"destructor"<<n<<endl;
	}
};

int main()
{
	number a(1);
	number b(2);
	number c(3);
	return 0;
}
