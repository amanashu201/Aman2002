
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("adress2.txt");

    int count = 0;
    char str[80];
    
    while(!infile.eof())
    {
        infile.getline(str,80);
        count++;
    }
    
    cout << "Number of lines in file are " << count;
  
    infile.close();
    return 0;
}
