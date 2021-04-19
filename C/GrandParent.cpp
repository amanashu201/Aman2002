#include<iostream>
using namespace std;
class grandparent
{	
protected:
	int g;
};
class parent1 : public virtual grandparent
{
protected:
	void display_g_p1()
	{
		g = 10;
		cout<<"The value of g in p1 is "<<g;
	}
};
class parent2 : public virtual grandparent
{
	void display_g_p2()
	{
		g = 20;
		cout<<"The value of g in p2 is "<<g;
	}
};
class child : public parent1, public parent2
{
public:
	void display_g_c()
	{
		//g = 30;
		cout<<"The value of g in clild is "<<g;
	}
};
int main()
{
	child c;
	c.display_g_c();
	return 0;
}
