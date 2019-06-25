/*Write a C++ program to convert a string to lowercase*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s[50];
	int i;
 
   cout<<"Input a string to convert to lower case"<<endl;
   gets(s);
   for(i=0;i<=50;i++) 
   { 
   if(s[i]>=65 && s[i]<=92)
      {
	  s[i]=s[i]+32;
      }
   }
 
   cout<< "String in lowercase:"<< s;
	
}
