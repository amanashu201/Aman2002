#include<iostream>

using namespace std;

class set
{
	int m,n;
  public:
  	void input(void);
  	void display(void);
  	int largest(void);
};
int set::largest(void)
{
	if(m>=n)
		return(m);
	else
		return(n);
}
void set::input(void)
{
	cout<<"Input value of m and n"<<"\n";
	cin>>m>>n;
}
void set::display(void)
{
	cout<<"Largest value="<<largest()<<"\n";
}
int main()
{
	set A;
	set *B = new set();
	B->input();

	A.input();
	A.display();
	return 0;
}
