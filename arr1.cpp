//sum of array elements

#include<iostream>
using namespace std;

int main(){
	int a[5];
	int sum=0;
	cout<<"Enter 5 elements : ";
	for(int i=0;i<5;i++){
		cin>>a[i];
		sum = sum + a[i];
	}
	cout<<"Sum of array elements : "<<sum<<endl;
	return 0;
}
