/*working with mutiple files*/
//creating files with open() function
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream fout;					//create output stream
	fout.open("country");			//connect "country" TO IT
 	
	fout <<"United states Of America\n";
	fout <<"United Kingdom\n";
	fout <<"South Korea\n";
	
	fout.close();				//disconnect "country" and
	fout.open("capital");		//connect "capital"
	
	fout <<"Washington\n";
	fout <<"London\n";
	fout <<"Seoul\n";
	
	fout.close();			//disconnect "Capital"
	
	//Reading the files
	const int N = 80;		//size of line
	char line[N];
	
	ifstream fin;			//create input stream
	fin.open("country");		//connect "country" to it
	
	cout <<"contents of country file\n";
	while(fin)			//check end-of-file
	{
		fin.getline(line, N);		//read a line
		cout <<line;				//display it
	}
	fin.close();				//disconnect "country" and
	
	fin.open("capital");
	cout <<"\nContents of capital file\n";
	
	while(fin)
	{
		fin.getline(line, N);
		cout << line;
	}
	fin.close();
	return 0;
}
