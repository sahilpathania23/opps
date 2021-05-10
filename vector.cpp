#include <iostream>
using namespace std;
class Vector{
public:
	int *arr;
	int ms ;// this is for the maximum size we used to give to the initial array
	int cs ;//this is the current size of the array
 
 	// this is default constructor used to make array and assign some values to it
	Vector (int s=2){
		ms=s; //this is what we given by the user to the array size
		cs=0;
		arr=new int [ms]; //and we create an dynamic array of size ms
	}
	void push_back(int data){
		if (cs==ms){
			// this will store the array address of the older array and the size also
			int *oldarr=arr;
			int oldms=ms; 
			ms=2 * ms; // as we know the size of new array will be double of the previous array so ms is 4 in previous ans now it is ms*2 is 8
			arr=new int[ms]; //this is how we assign the arr to new arrsy of size 500 or double the previous array 
			// now we cpy the old array to new  array 
			for(int j;j<oldms;j++){
				arr[j]=oldarr[j];
			}
			// now after this we just have to delete the array the old array 
			delete [] oldarr;
			oldarr=NULL;
		}
		arr[cs]=data;
		// we just add the data to the current position of the array
		// and increment it
		cs++;

	}
	void pop_back(){
		// it is easy to  remove the value by just making cs -1;
		if (cs>0){
			cs--;
		}

	}
	// operator overloading should be done 
	// this is done incase of outputting the value of v[i] which incase is used to return the value of arr[i] as same so i is the arrgument and operator is []
	int operator[] (int i){
		return arr[i];
	}
	int size(){
		return cs;

	}
	int capacity(){
		return ms;
	}

};
int main(){
	Vector v;
	v.push_back(102);
	v.push_back(123);
	v.push_back(1);
	v.push_back(134);
	v.push_back(54);
	v.push_back(23);

	for (int h=0; h<v.size();h++){
		cout<<v[h]<<" "<<endl;
		// here is when we call the operator overloading part  

	}
	cout<<endl;

	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl; 



	return 0;

}
