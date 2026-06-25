//Friend function

#include<iostream>
using namespace std;

class compare{
private:
	int a,b;
public:
	void getdata(){
		cout<<"Enter 2 numbers: ";
		cin>>a>>b;
	}
	friend void largest(compare c);
};
void largest(compare c){
	if(c.a > c.b)
		cout<<"Largest = "<<c.a<<endl;
	else
		cout<<"Largest = "<<c.b<<endl;
}
int main(){
	compare c1;
	c1.getdata();
	largest(c1);
	return 0;
}

