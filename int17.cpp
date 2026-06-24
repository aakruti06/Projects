// Hybrid inheritance

//   Numbers
//   /    \
//  /      \
//SOP     POS
//  \      /
//   \    /
//   Result


//SOP - SUM of PRODUCTS
//POS - PRODUCT OF SUMS

#include<iostream>
using namespace std;

class numbers{
public:
	int a,b,c,d;
	void get_numbers(){
		cout<<"Enter numbers : ";
		cin>>a>>d;
		cin>>b>>c;
	}
	void display_numbers(){
		cout<<"Numbers -"<<endl;
		cout<<"a : "<<a<<endl;
		cout<<"b : "<<b<<endl;
		cout<<"c : "<<c<<endl;
		cout<<"d : "<<d<<endl;
	}
};

class sop : virtual public numbers{
public:
	int product1=0, product2=0;
	void product_numbers(){
		product1 = (a*b);
		product2 = (c*d);
		cout<<"Product of a & b : "<<product1<<endl;
		cout<<"Product of c & d : "<<product2<<endl;
	}
};

class pos : virtual public numbers{
public:
	int sum1=0, sum2=0;
	void sum_numbers(){
		sum1 = (a+b);
		sum2 = (c+d);
		cout<<"Sum of a & b : "<<sum1<<endl;
		cout<<"Sum of c & d : "<<sum2<<endl;
	}
};

class result : public sop, public pos{
public:
	void sum_of_prod(){
		int sum_of_products = (product1 + product2);
		cout<<"Sum of products : "<<sum_of_products<<endl;
	}

	void prod_of_sums(){
		int product_of_sums = (sum1 * sum2);
		cout<<"Product of sums : "<<product_of_sums<<endl;
	}
};

int main(){
	result r1;

	r1.get_numbers();
	r1.display_numbers();

	r1.product_numbers();
	r1.sum_numbers();

	r1.sum_of_prod();
	r1.prod_of_sums();

	return 0;
}
