// Store and read data

/*

	ofstream - write data in a file

	ifstream - read data in a file

	fstream - read and write data in a file

*/

#include<iostream>
#include<fstream>

using namespace std;

int main()
{

	int a,b;

	cout<<"Enter values for a & b: ";
	cin>>a;
	cin>>b;

	ofstream fout("results.txt");

	fout<<"a : "<<a<<",  b : "<<b<<endl;
	fout<<"Sum = "<<(a+b)<<endl;

	fout.close();

	ifstream fin("results.txt");

	string line;
	while(getline(fin,line)){
		cout<<line<<endl;
	}
	fin.close();
	return 0;
}
