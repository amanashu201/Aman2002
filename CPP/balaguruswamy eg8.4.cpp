//multiple inheritance
#include<iostream>
using namespace std;

class M
{
	protected:
		int m;
	public:
		void get_m();
};
class N
{
	protected:
		int n;
	public:
		void get_n();
};
class P : public M, public N
{
	public:
		void display();
};
void M :: get_m()
{
	int x;
	m = x;
}
void N :: get_n()
{
	int y;
	n = y;
}
void P :: display()
{
	cout << "m ="<<m<< "\n";
	cout <<" n ="<<n<< "\n";
	cout<< "m*n ="<<m*n<< "\n";
}
int main()
{
	P p;
	
	p.get_m();
	p.get_n();
	p.display();
	
	return 0;
	
}
