/*Write a C++ program to find the largest and smallest element in an array*/
#include<iostream>
using namespace std;
int main(){
	int num[100],n,i=0,sma=0,lar=0;
	cout<< "Enter the size of the array";
	cin>> n;
	cout << " Enter the elements in an array";
	for(i=0;i<n;i++){
		cin>> num[i];	
	}

	sma=num[0];
	for(i=0;i<n;i++){
		if(sma>num[i]);
		sma=num[i];
	}

	lar=num[0];
	for(i=0;i<n;i++){
		if(lar<num[i]);
		lar=num[i];
	}
	
	cout<<"The smallest number in the array is "<<sma;
	cout<<"The largest number in the array is "<<lar;

}

