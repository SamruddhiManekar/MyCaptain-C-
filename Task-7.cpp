/*Write a C++ program to swap two numbers using function*/
#include<iostream>
void swap(int a, int b);
using namespace std;
int main()
{
	int a,b;
	cout << "Enter two numbers";
	cin >> a >> b;
	cout << "a="<< a <<endl<< "b=" << b<<endl;
	swap(a,b);
}
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "The swapped numbers are:"<<endl;
	cout << "a="<< a <<endl<< "b=" << b;
}
