#include<iostream>
using namespace std;
class house
{
	int roll;
	char name[30];
	static int house_point;
	public:
		void input();
		void display();
		void add_house_point();
		static void display_house_point();
		
};
void house::input()
{
	cout<<"Enter students name: ";
	gets(name);
	getchar();
	cout<<"Enter students roll number: ";
	cin>>roll;
//	cout<<"Enter students house point: ";
	//gets(house_point);
}
void house::display()
{
	cout<<"name"<<name<<endl;
	cout<<"roll"<<roll<<endl;
}
void add_house_point(int pt)
{
	house_point=house_point+pt;
}
int main()
{
	house red1, blue1, red2, blue2;
	red1.input();
	red1.add_house_point(10);
	red2.input();
	red2.add_house_point();
	blue1.input()
	blue1.add_house_point(20);
	blue2.input();
	blue2.add_house_point();
	class house::display house()
}
