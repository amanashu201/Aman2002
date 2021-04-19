#include<iostream>
using namespace std;

int main()
{
	int matrix[3][3], i, j;
	
	//----------Taking input of matrix elements
	
	cout<<"Enter the elements of 3 X 3 matrix below:\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<"elements"<<i<<j;
			cin>>matrix[i][j];
		}
	}
	
	//---------Displaying matrix
	
	cout<<"The required matrix is as follows:\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>matrix[i][j];
		}
		cout<<"\n";
	}
	return 0;	
}
