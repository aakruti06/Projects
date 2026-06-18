// array objects with constructor


#include<iostream>
using namespace std;

class demo{
public:
	demo(){
		cout<<"constructor"<<endl;
	}
};

int main()
{
	demo d[3];
	return 0;
}
