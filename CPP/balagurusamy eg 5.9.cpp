#include<iostream>

using namespace std;

const int m=50;
class ITEMS
{
	int itemcode[m];
	float itemprice[m];
	int count;
  public:
  	void CNT(void){count=0;}
  	void getitem(void);
  	void displaysum(void);
  	void remove(void);
  	void displayitem(void);
};
void ITEM::getitem(void)
{
	cout<<"Enter item code:";
	cin>>itemcode[count];
	
	cout<<"Enter item cost:";
	cin>>itemprice[count];
	cout++;
}
void ITEMS::displaysum(void)
{
	cout<<"\ncode price\n";
	for(int i=0; i<cout; i++)
	{
		cout<<"\n"<<itemcode[i];
		cout<<" "<<itemprice[i];
	}
	cout<<"\n";
}
int main()
{
	ITEMS order;
	order.CNT();
	int x;
	do                  //do......while loop
	{
		cout<<"\nYou can do the following:"<<"Enter appropriate number\n";
		cout<<"\n1: Add an item";
		cout<<"\n2: Display total value";
		cout<<"\n3: Display an item";
		cout<<"\n4: Display all items";
		cout<<"\n5: Quit";
		cout<<"\n\nWhat is your option?";
		
		cin>>x;
		
		switch(x)
		{
			case 1: order.getitem();break;
			case 2: order.displaysum();break;
			case 3: order.remove();break;
			case 4: order.displayitem();break;
			case 5: break;
			default : cout<<"Error in input; try again\n";		
		}
		
	}while(x!=5);
	return 0;
}

