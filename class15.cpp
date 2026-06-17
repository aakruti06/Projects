//default and parameterzied constructor

#include<iostream>
using namespace std;

class square {
public:
	int side;

	square(){
		side = 0;
	}

	square(int s){
		side = s;
	}

	void printdata(){
		cout<<"Side = "<<side<<endl;
	}

};

int main()
{
	square a;
	square b(10);

	a.printdata();
	b.printdata();

	return 0;
}
