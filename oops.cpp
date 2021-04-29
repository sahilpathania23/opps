#include <iostream>
using namespace std;

// first we have to create a blue print 
class car{
public:
	int price;
	char name[100];
	int average;
	int model;


};


int main(){
	car a;
	// a.name="bwm"; this will not work
	strcpy(a.name,"BMW");
	a.price=100;
	a.average=10;
	a.model=2;

	cout << a.name << endl;
	cout << a.average << endl;
	cout << a.model << endl;
	cout << a.price << endl;
	cout<<"sahil";
	


	return 0;

}