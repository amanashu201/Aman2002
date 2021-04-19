#include<iostream>
using namespace std;
class integer
{
	int i;
public:
	integer()
	{
		i=1;
	}
	void get(int a);
	void put();

};
void integer::get(int a)
{
	i=a;
}
void integer::put()
{
	cout<<i;
}
int main()
{
	integer obi, obi1;
	cout<<"Value of i before calling get()";
	obi.put();
	obi.get(10);
	cout<<"value of out after calling get()";
	obi.put();
}                                                        
