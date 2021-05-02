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
	car(){
		cout<<"this is a default constructor"<<endl;
	}
	car(char *p,int n,int m,int i){
		cout<<"this is a parameterized constructor"<<endl;
		strcpy(name,p);
		price=n;
		model=m;
		average=i;

	}


};


int main(){
	car a;
	// a.name="bwm"; this will not work
	strcpy(a.name,"BMW");
	a.price=100;
	a.average=10;
	a.model=2;

	car b("SANTRO",130,13,12);
	// cout << a.name << endl;
	// cout << a.average << endl;
	// cout << a.model << endl;
	// cout << a.price << endl;
	// this above can be done using functiond


	// strcpy(b.name,"AUDI");
	// b.price=103;
	// b.average=130;
	// b.model=221;
	// b.print();


	car d=b; 
	// this is the copy constructor which is used to copy the value of b to the d
	a.print();
	b.print();
	d.print();
	
	

	return 0;

}