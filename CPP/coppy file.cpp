#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("out.txt");
    
    ofstream fout;
    fout.open("sample.txt");
    
    char ch;
    
    while(!fin.eof())
    {
        fin.get(ch);
        fout << ch;
    }
    fout<<"file coppied sucessfully";

    fin.close();
    fout.close();
    return 0;
}
