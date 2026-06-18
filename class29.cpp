// array of objects - name, roll, marks;
#include<iostream>
using namespace std;

class student{
public:
	int roll,marks;
	string name;
	student(){
		cout<<"Student object created"<<endl;
	}
	void getdata(){
		cout<<"Enter student details: ";
		cout<<"Roll: ";
		cin>>roll;
		cout<<"Marks: ";
		cin>>marks;
		cout<<"Name: ";
		cin>>name;
	}
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Roll: "<<roll<<endl;
		cout<<"Marks: "<<marks<<endl;
	}
	~student(){
		cout<<"Destructor"<<endl;
	}
};
int main()
{

	student k[2];
	for(int i=0;i<2;i++){
		k[i].getdata();
	}
	cout<<"\nStudent details: \n"<<endl;
	for(int i=0;i<2;i++){
		k[i].display();
	}
	return 0;
}
