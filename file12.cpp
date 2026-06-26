/*

	ofstream - write into a file
	ifsstream - read from a file
	fstream - read and write file

*/


#include<iostream>
#include<fstream>

using namespace std;

int main(){

	ifstream fin("text.txt");
	ofstream fout("emp.txt");

	string line;

	while(getline(fin,line))
	{
		fout<<line<<endl;
	}

	fin.close();
	fout.close();

	cout<<"File copied successfully"<<endl;

	return 0;
}
