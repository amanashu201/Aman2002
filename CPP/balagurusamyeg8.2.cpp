//single inheritance with private
#include<iostream>
using namespace std;

class one
{
	int a;					//private ;not inheritance
  public:
  	int b;
  	void get_ab();
  	int get_a();
  	void show_a();
};
class two:private one
{
	int c;
  public:
  	void mul();
  	void displsy();
};
void one::get_ab()
{
	cout<<"Enter value for a and b:";
	cin>>a>>b;
}
int one::get_a()
{
	return a;
}
void one::show_a()
{
	cout<<"a= "<<a<<"\n";	
}
void two::mul()
{
	get_ab();
	c = b*get_a();
}
void two::displsy()
{
	show_a();
	cout<< "b= "<<b<<"\n"<<"c= "<<c<<"\n\n";
}
int main()
{
	two d;
	d.mul();
	d.displsy();
	d.mul();
	d.displsy();
	
	return 0;
}
