//String Class Experiment
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	string str1;
	str1 = "A001";
	char str[20] = "Hello!";
	
	string str2(str);
	string str3(str1);
	
	cout<<"str1: "<<str1<<endl;
	cout<<"str2: "<<str2<<endl;
	cout<<"str3: "<<str3<<endl;
	
	int x = str1.compare(str3);
	cout<<"x="<<x<<endl;
	
	cout<<"The size of str1 is "<<str1.size()<<endl;
	cout<<"The length of str1 is "<<str1.length()<<endl;
	cout<<"The capacity of str1 is "<<str1.capacity()<<endl;
	cout<<"Is str1 emplty? "<<str1.empty()<<endl;
	//cout<<"Next Serial= "<<str1 + 1<<endl;
}
