/*

	ofstream - write to file
	ifstream - read from file
	fstream - reaad a write a file

*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream fout;

	fout.open("sample.txt");

	fout<<"Hi,"<<endl;
	fout<<"New file editing"<<endl;

	fout.close();

	cout<<"Data written successfully"<<endl;

	return 0;
}

