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
	// 1
	// defau;t constructor
	car(){
		cout<<"this is a default constructor"<<endl;
	}
	// 2
	// parameterized constructor
	car(char *p,int n,int m,int i){
		cout<<"this is a parameterized constructor"<<endl;
		strcpy(name,p);
		price=n;
		model=m;
		average=i;

	}
	// 3 
	// copy constructor and pass it with the refernece only using &
	car(car &x){
		cout<<"inside the copy constructor"<<endl;
		strcpy(name,x.name);
		price=x.price;
		model=x.model;
		average=x.average;
    
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


	car d=a;
	// this is the copy constructor which is used to copy the value of b to the d
	a.print();
	b.print();
	d.print();
	
	

	return 0;

}