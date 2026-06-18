//constructor

#include<iostream>
using namespace std;

class number{
public:
	int n;

	number(){
		n = 12;
		cout<<"Default"<<endl;
		cout<<"---------------------------------"<<endl;
	}

	number(int m){
		n = m;
		cout<<"Parameterized"<<endl;
		cout<<"n: "<<n<<"; Square = "<<n*n<<endl;
		cout<<"---------------------------------"<<endl;
	}

	number(const number &num){
		n = num.n;
		cout<<"Cube = "<<n*n*n<<endl;
		cout<<"---------------------------------"<<endl;
	}

	~number(){
		cout<<"Destructor"<<endl;
		cout<<"---------------------------------"<<endl;
	}
};

int main(){
	number a;
	number b(4);
	number c(6);
	number d(c);
	return 0;
}
