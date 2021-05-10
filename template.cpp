#include <iostream>
using namespace std;

// so this is basically for the datatype which help us to take any datatype as inout from the user

template<typename t>
class Vector{
public:
	t *arr;
	int ms ;
	int cs ;
 
	Vector (int s=4){
		ms=s; 
		cs=0;
		arr=new t [ms]; 
	}
	void push_back(t data){
		if (cs==ms){
			
			t *oldarr=arr;
			int oldms=ms; 
			ms=ms+ms; 
			arr=new t[ms]; 
			for(int j=0;j<oldms;j++){
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

	t operator[] (int h){
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
	Vector <int> v;
	v.push_back(12);
	v.push_back(34);
	v.push_back(3412);
	v.push_back(341);
	v.push_back(342);
	v.push_back(32);
	
	

	for (int h=0; h<v.size();h++){
		cout<<v[h]<<endl;
	
	}
	cout<<endl;

	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl; 



	return 0;

}
