//Command Line Arguments
#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
	int number[9] = {11,22,33,44,55,66,77,88,99};
	
	if(argc!=3)
	{
		cout << "argc = "<<argc<<"\n";
		cout << "Error in arguments\n";
		exit(1);
	}
	ofstream fout1,fout2;
	fout1.open(argv[1]);
	
	if(fout1,fail)
}
