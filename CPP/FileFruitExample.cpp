#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream fout;
	char fruits[100];
	fout.open("FRUITS");
	cout<<"Enter Names of some fruits below:\n";
	cin.getline(fruits, 100);
	fout<<fruits;
	fout.close();
	
	ifstream fin;
	fin.open("FRUITS");
	fin.getline(fruits, 100);
	cout<<fruits;
	fin.close();
	
	return 0;
}
