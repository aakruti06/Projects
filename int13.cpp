//multiple inheritance

#include<iostream>
using namespace std;

class person{
private:
	int age;
public:
	string name;

	void set_person(){
		cout<<"Name : ";
		cin>>name;

		cout<<"Age : ";
		cin>>age;
	}
	void show_age(){
		cout<<"Age : "<<age<<endl;
	}
};

class account{
protected:
	int balance;
public:
	void set_balance(){
		cout<<"Balance : ";
		cin>>balance;
	}
};

class customer : public person, public account{
public:
	void display(){
		cout<<"\n customer name: "<<name<<endl;
		show_age();

		cout<<"Balance : "<<balance<<endl;
	}
};

int main(){

	customer c;
	c.set_person();
	c.set_balance();

	c.display();
	return 0;
}
