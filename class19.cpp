// multiple objects destructor

#include<iostream>
using namespace std;

class number{
public:
	number(){
		cout<<"Constructor"<<endl;
	}
	~number(){
		cout<<"Destructor"<<endl;
	}
};

int main(){
	number a;
	number b;

	return 0;
}
