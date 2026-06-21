// Single Inheritance 

//Student Result System

#include<iostream>
using namespace std;

class student{
private:
	int age;
protected:
	string address;
public:
	string name;
	int division;
	char section;

	void getdata(){
		cout<<"Enter the details -\n ";

		cout<<"Name: ";
		cin>>name;

		cout<<"Division: ";
		cin>>division;

		cout<<"Section: ";
		cin>>section;

		cout<<"Age: ";
		cin>>age;

		cout<<"Address: ";
		cin.ignore();
		getline(cin,address);

		cout<<endl;
	}

	void display(){
		cout<<"\n ----- Student Details ----- "<<endl;
		cout<<"\nName          :"<<name<<endl;
		cout<<"\nAge           :"<<age<<endl;
		cout<<"\nAddress       :"<<address<<endl;
		cout<<"\nDivision      :"<<division<<endl;
		cout<<"\nsection       :"<<section<<endl;
	}
};

class marks : public student{
public:
	int marks[5];
	int total = 0;
	char grade;

	void setmarks()
	{
		cout<<"Enter 5 subject marks: "<<endl;

		for(int i=0;i<5;i++)
		{
			cout<<"Subject "<<i+1<<" : ";
			cin>>marks[i];
			cout<<"Enterd : "<<marks[i]<<endl;
		}
	}

	void display_marks(){
		for(int i=0;i<5;i++){
			cout<<marks[i]<<" ";
		}
	}

	void result(){
		for(int i=0;i<5;i++){
			total += marks[i];
		}

		if(total >= 430){
			grade = 'A';
		}
		else if(total >= 400){
			grade = 'B';
		}
		else if(total >= 350){
			grade = 'C';
		}
		else if(total >= 300){
			grade = 'D';
		}
		else if(total >= 280){
			grade = 'E';
		}
		else{
			grade = 'F';
		}
		cout<<"Total Marks : "<<total<<endl;
		cout<<"Grade       : "<<grade<<endl;
	}
};

int main(){
	marks m1;
	m1.getdata();
	m1.display();

	m1.setmarks();
	m1.display_marks();
	m1.result();

	return 0;
}
