// student records

/*

	ofstream - write into a file
	ifstream - read from a file
	fstream - read and write a file

*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){

	string name;
	int marks[4];

	ofstream fout;
	fout.open("student.txt");
	for(int i=1;i<=5;i++)
	{
		cout<<"\n Student "<<i<<endl;
		cout<<"Name : ";
		cin>>name;

		fout<<"Student   : "<<i<<endl;
		fout<<"Name      : "<<name<<endl;

		cout<<"Enter the subject marks: "<<endl;

		for(int j=0;j<4;j++)
		{
			cout<<"Subject "<<j+1<<" : "<<endl;
			cin>>marks[j];

			fout<<"Subject   "<<j+1<<" : "<<marks[j]<<endl;
		}
	}

	fout.close();

	ifstream fin("student.txt");
	string line;
	cout<<"\n ------ Student Records ------ \n"<<endl;

	while(getline(fin,line))
	{
		cout<<line<<endl;
	}

	fin.close();
	return 0;
}
