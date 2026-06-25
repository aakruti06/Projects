/*

	ofstream - write into a file

	ifstream - read from a file 

	fstream  - read and write a file

*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream fout;

	fout.open("text.txt");

	fout<<"New lines"<<endl;
	fout<<"line 1"<<endl;
	fout<<"line 2"<<endl;
	fout<<"line 3"<<endl;
	fout<<"line 4"<<endl;

	fout.close();
	cout<<"Data written successfully"<<endl;

	return 0;
}
