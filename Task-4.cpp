/*Write a C++ program to calculate sum of all the elements of an array*/
#include<iostream>
using namespace std;
int main()
{
	int num[100],n,i=0,sum=0;
	cout<< "Enter the size of the array";
	cin>> n;
	cout << " Enter the elements in an array";
	for(i=0;i<n;i++){
		cin>> num[i];	
	}
	for(i=0;i<n;i++){
		sum = sum + num[i];
	}
	cout<< "The sum of elements of an array is"<<sum;
}
