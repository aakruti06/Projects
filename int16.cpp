// Hybrid Inheritance

#include<iostream>
using namespace std;

class person{
public:
	string name;

	void get_name()
	{
		cout<<"Name : ";
		cin>>name;
	}
};

class student :virtual public person{
public:
	int marks[6];
	int total = 0;

	void get_marks()
	{
		cout<<"Academic marks : ";
		for(int i=0;i<6;i++)
		{
			cin>>marks[i];
			total += marks[i];
		}
	}
};

class sports :virtual public person{
public:
	int sport_marks;

	void get_s_marks(){
		cout<<"Sports marks : ";
		cin>>sport_marks;
	}
};

class result : public student, public sports{
public:
	void display(){
		cout<<"\n Name : "<<name<<endl;
		cout<<"Academic : "<<total<<endl;
		cout<<"Sports : "<<sport_marks<<endl;
		cout<<"Grand total : "<<(total + sport_marks)<<endl;
	}


};

int main(){

	result r;
	r.get_name();
	r.get_marks();
	r.get_s_marks();

	r.display();

	return 0;
}
