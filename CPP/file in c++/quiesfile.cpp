#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class book
{
	private:
		char name[20];	
		float price;		//member variable
	public:
		Book()				//book constructor
		{
			bookid=0;
			title;
			price=0;
			strcpy(title,"no title");		//default value not contain garbage value
			price=0;
		}
void getBookData()		//facility provide book id title or price
{
	cout<<"Enter bookid :";
	cin>>bookid;
	cout<<"Title :";
	cin>>title;
	cout<<"Price of book :";
	cin>>price;
	cin.ignore();
	cin.getline(title,19);
	cin>>price;
}
void showBookData()		//print call on boject like book id ,price,title
{
	cout<<"\n"<<bookid<<" "<<title<<" "<<price;
}
int storeBook();
void viewallbooks();

};
void book::viewallbooks()
{
	ifstream fin;
	fin.open("file1.dat" ,ios::in |ios::binary);
	
	if(!fin)		//this massage shown file not made
	{		
		cout<<"file not found";
	}
	else
	{
		fin.read((char*)this,sizeof(*this));			//*this point char*
		while(!	fin.eof())
		{
				
			showBookData();
			fin.read((char*)this,sizeof(*this));
		}
		fin.close();
	}
	
}

int book::storeBook()		//data store
{
	if(bookid==0&&price==0)
	{
	
		cout<<"Book data not initilize";
		return (0);
	}
	else
	{
	
	
		ofstream fout;                                                                                   
		fout.open("file1.dat",ios::app | ios::binary);
		fout.write((char*) this,sizeof(*this));			//
		fout.close();
		return(1);
	}
}
int main()
{
	book b1, b2;
	b1.getBookData();
	b1.showBookData();
	b1.storeBook();
	b2.showBookData();
	b2.storeBook();
	b2.viewallbooks();
}

