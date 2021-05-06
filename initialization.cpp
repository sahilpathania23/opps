#include <iostream>
using namespace std;

class car{
	public:
		char * name;
		int price;
		int model;
		int average;
		// this is known as constant which ones assign will never gonna change
		const int tyer;
		// this is known as initialization list 
		// and this is the default constructor
		car():tyer(4){
			name =NULL;
			cout<<"inside default constructor"<<end;

		}
		// whereever we create a object or constructor we have to assign the initializer for the 
		// constant 
		// now this is a parameterized constructor 
		car(char *n,int p,int av,int m):tyer(4){
			cout<<"inside the parameterized constructor"<<endl;
			name=new char[strlen(n)+1];
			// in the above code i have created the name bucket of size lenght n
			// as we can see we have already define the char* name in the starting
			strcpy(name,n);
			// and now i have copy the n in the name bucket
			price=p;
			average=av;
			model=m;

		}
		// copy constructor
		car(car &x):tyer(4){
			 cout<<"inside copy constructor"<<endl;
			 name=new char[strlen(x.name)+1];
			 strcpy(name,x.name);
			 price=x.price;
			 average=x.average;
			 model=x.model;

		}
		// this is copy assignment operator
		void operator=(car &x){
			cout<<"inside copy assignment operator"<<endl;
			if(name!=NULL){
				delete [] name;
				name =NULL;

			}
			name =new char[strlen(x.name)+1];
			strcpy(name,x.name);
			price=x.price;
			average=x.average;
			model=x.model;
		}
		// operator overloading
		void operator+=(car x){
			char *x1=new char[strlen(x.name)+strlen(name)+1];
			strcpy(x1,name);
			delete [] name;
			name =x1;
			strcat(name,x.name);
			price+=x.price;
			model+=x.model;
			average+=x.average;

		} void print(){
			cout<<"price  "<<price<<endl;
			cout<<"model  :"<<model<<endl;
			cout<<"average  "<<average<<endl;
			cout<<"name " <<name<<endl;

		}
};
int main(){
	car a;// this is how we create an object  
	a("maruti",22,21,23);
	car b("bmw",220,23,45);
	car c("honda",45,67,45);
	car d("thar",23,45,7);
	a.print();
	b.print();
	c.print();
	d.print();



	return 0;

}