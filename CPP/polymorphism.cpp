//Run time polymorphism
#include<iostream>
#include<cstring>

using namespace std;
class media
{
	protected:
		char title[50];
		float price;
	public:
		media(char *s, float a)
		{
			strcpy(title, s);
			price = a;
		}
		virtual void display() 
		{
			//empty virtual function
		}
};
class book : public media
{
	int pages;
public:
	book(char *s, float a, int p):media(s,a)  //
	{
		pages = p;
	}
	void display();
};
class tape : public media
{
	float time;
public:
	tape(char *s, float a,float t):media(s,a)
	{
		time = t;
	}
	//void display();
};
void book :: display()
{
	cout << "Title:" <<title <<endl;
	cout << "Pages:" << pages;
	cout << "Price:" << price;
}
/*void tape :: display()
{
	cout << "Title:" <<title <<endl;
	cout << "Play time:" << time << "mins";
	cout << "Price:" << price;
}*/
int main()
{
	char * title = new char[30];
	float price , time;
	int pages;
	
	//Book Details
	cout<<"ENTER BOOK DETAILS"<<endl;
	cout<<"Title:";
	cin>>title;
	cout<<"Price:";
	cin>>price;
	cout<<"pages:";
	cin>>pages;
	
	book book1(title, price, pages);
	
	//Tape details
	cout<<"ENTER TAPE DETAILS";
	cout<<"Title:";
	cin>>title;
	cout<<"price";
	cin>>price;
	cout<<"Play time (mins): ";
	cin>>time;
	
	tape tape1(title, price, time);
	
	media * list[2];
	
	list[0] = &book1;
	list[1] = &tape1;
	
	cout << "MEDIA DETAILS"<<endl;
	
	cout<<"--------BOOK---------"<<endl;
	list[0]->display();
	
	cout<<"-------TAPE----------"<<endl;
	list[1]->display();
	
	return 0;
}
