// multi level inheritance

//Person - Employee - Manager

#include<iostream>
using namespace std;

class person{
public:
	string name;
	string surname;

	void getdata(){
		cout<<"Enter details - \n";
		cout<<"Name             : ";
		cin>>name;
		cout<<"Surname          : ";
		cin>>surname;
	}
};

class employee : public person{
public:
	string company;
	int experience;
	int salary;

	void empdata(){
		cout<<"Company          : ";
		cin>>company;
		cout<<"Experience       : ";
		cin>>experience;
		cout<<"Salary           : ";
		cin>>salary;
	}
};

class manager : public employee{
public:
	string m_name;
	string project;

	void mdata(){
		cout<<"Manager          : ";
		cin>>m_name;
		cout<<"Project          : ";
		cin>>project;
	}

	void  display(){
		cout<<endl;
		cout<<name<<" "<<surname<<endl;
		cout<<experience<<endl;
		cout<<salary<<endl;
		cout<<endl;
		cout<<m_name<<endl;
		cout<<project<<endl;
		cout<<company<<endl;
	}
};

int main(){

	manager a1;
	a1.getdata();
	a1.empdata();
	a1.mdata();
	a1.display();

	return 0;
}
