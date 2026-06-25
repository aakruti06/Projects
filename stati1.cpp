// Static Object Counter

#include<iostream>
using namespace std;

class number{
public:
	static int count;
	number(){
		count++;
	}

	static void display(){
		cout<<"Objects created "<<count<<endl;
	}
};

int number :: count = 0;

int main(){
	number n1;
	number n2;
	number n3;
	number n4;

	number :: display();

	return 0;
}
