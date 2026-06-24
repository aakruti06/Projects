//function overridding

#include<iostream>
using namespace std;

class animal{
public:
	void sound(){
		cout<<"Animal sound"<<endl;
	}
};
class dog : public animal{
public:
	void sound(){
		cout<<"Bark"<<endl;
	}
};
int main()
{
	animal a;
	a.sound();

	dog d;
	d.sound();

	return 0;
}
