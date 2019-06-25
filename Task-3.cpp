/*Write a C++ program to check if given year is a leap year*/
#include<iostream>
using namespace std;
int main(){
	int n=0;
	cout<<"Enter any year";
	cin>> n;
	if(n%4==0)
	cout<< n <<" is a leap year";
	else
	cout<< n << " is not a leap year";
}
