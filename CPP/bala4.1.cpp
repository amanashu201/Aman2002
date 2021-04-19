/*4.1=write a function to read matrix M*N from keyboard*/
#include<iostream>
using namespace std;
int main()
{
	int a[10][10],n,m,i,j;
	cout<<"enter the value of m:";
	cin>>m;
	cout<<"enter the value of n:";
	cin>>n;
	
	cout<<"enter elements of matrix:";
	
	for(i=0; i<m; i++)
	for(j=0;j<n; j++)
	cin>>a[i][j];



	cout<<"The matrix is:";
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		cout<<a[i][j]<<" ";
		}
		cout<<"n";
		
	}
	return 0;
}
