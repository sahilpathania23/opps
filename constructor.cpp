#include <iostream>
using namespace std;

// first we have to create a blue print 
class car{
public:
	int price;
	char name[100];
	int average;
	int model;
	void print(){
		cout << "name :"<< name << endl;
	cout<< "average :" << average << endl;
	cout<<"model :" << model << endl;
	cout << "price :"<< price << endl;

	}


};


int main(){
	car a;
	// a.name="bwm"; this will not work
	strcpy(a.name,"BMW");
	a.price=100;
	a.average=10;
	a.model=2;
	a.print();
	car b;
	// cout << a.name << endl;
	// cout << a.average << endl;
	// cout << a.model << endl;
	// cout << a.price << endl;
	// this above can be done using functiond
	strcpy(b.name,"AUDI");
	b.price=103;
	b.average=130;
	b.model=221;
	b.print();



	


	return 0;

}