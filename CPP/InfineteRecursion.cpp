#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
	
	if(argv[1] < 1)
	{
		cout<<"We are in main()"<<endl;
		argv[1]--;
		main(1, argv[0]);
	}
	
	return 0;
}
