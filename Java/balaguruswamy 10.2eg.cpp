//reading string with getline() function
#include<iostream>
using namespace std;

int main()
{
	int size = 20;
	char city[20];
	
	cout <<"Enter city name:\n";
	cin >>city;
	cout <<"city name:"<<city<<endl;
	
	cout <<"enter city name again:"<<endl;
	cin.getline(city,size);
	cout <<"city name now:"<<city<<endl;
	
	cout <<"enter another city name:"<<endl;
	cin.getline(city,size);
	cout <<"New city name:"<<city<<endl;
	
	return 0;
}
