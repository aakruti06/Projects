// Static object counter

#include<iostream>
using namespace std;

class number{
public:
	static int n;

	number(){
		n++;
	}
	static void display(){
		cout<<"Objects created : "<<n<<endl;
		cout<<"Square of "<<n<<" = "<<n*n<<endl;
	}
};
int number :: n = 1;

int main(){
	number x1;
	number x2;
	number x3;

	number::display();

	return 0;
}

