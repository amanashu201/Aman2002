//single inheritance with public
#include<iostream>

using namespace std;
class B
{
	int a;
  public:
  	int b;
  	void get_ab();
  	int get_a();
  	void show_a();
};
class D:public B
{
	int c;
  public:
  	void mul();
  	void display();
};
void B::get_ab()
{
	a=5; b=10;
}
int B::get_a()
{
	return a;
}
void B::show_a()
{
	cout<<"a="<<a<<"\n";
}
void D::mul()
{
	c=b*get_a();
}
void D::display()
{
	cout <<"a="<<get_a()<<"\n";
	cout<<"b="<<b<<"\n";
	cout<<"c="<<c<<"\n\n";
}
int main()
{
	D d;
	d.get_ab();
	d.b=20;
	d.get_a();
	d.mul();
	d.show_a();
	d.display();
	
	return 0;
}
	
