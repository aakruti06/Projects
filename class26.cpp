// array of  objects  - name and roll no

#include<iostream>
using namespace std;

class student{
public:
	int roll;
	string name;

	void getdata(){
		cout<<"Enter roll number and name: ";
		cin>>roll>>name;
	}

	void display(){
		cout<<roll<<" "<<name<<endl;
	}
};

int main()
{
	student s[3];

	for(int i=0;i<3;i++){
		s[i].getdata();
	}

	cout<<"\n Data: \n";

	for(int i=0;i<3;i++){
		s[i].display();
	}
}
