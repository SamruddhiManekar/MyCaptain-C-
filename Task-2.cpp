/*Write a C++ program to check if given number is even or odd*/
#include<iostream>
using namespace std;
int main()
{
	int n=0;
	cout<< "Enter any number";
	cin>>n;
	if(n%2==0){
		cout<< n << "is an even number";
	}
	else{
		cout<< n << "is an odd number";
	}
	
}
