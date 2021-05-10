#include <iostream>
using namespace std;
class Vector{
public:
	int *arr;
	int ms ;
	int cs ;
 
	Vector (int s=4){
		ms=s; 
		cs=0;
		arr=new int [ms]; 
	}
	void push_back(int data){
		if (cs==ms){
			
			int *oldarr=arr;
			int oldms=ms; 
			ms=2 * ms; 
			arr=new int[ms]; 
			for(int j;j<oldms;j++){
				arr[j]=oldarr[j];
			}
			
			delete [] oldarr;
			oldarr=NULL;
		}
		arr[cs]=data;
		
		cs++;

	}
	void pop_back(){
		if (cs>0){
			cs--;
		}

	}

	int operator[] (int h){
		return arr[h];
	}
	int size(){
		return cs;

	}
	int capacity(){
		return ms;
	}

};
int main(){
	Vector  v;
	v.push_back(102);
	v.push_back(123);
	v.push_back(1);
	v.push_back(134);
	v.push_back(54);
	v.push_back(23);

	for (int h=0; h<v.size();h++){
		cout<<v[h]<<endl;
	
	}
	cout<<endl;

	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl; 



	return 0;

}
