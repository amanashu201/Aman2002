#include<iostream>
#include<stdio.h>

using namespace std;
class file
{
private:
	FILE *fp;
	char file_name[20];
	int size=0;
public:
	void read_file();
	void display_file();
};
void file::read_file()
{
	cout<<"enter filename:";
	gets(file_name);
	getchar();
	fp = fopen("file", "r");
	
	while(fgetc(fp)!= EOF)
	{
		size++;
	}
	cout<<"file size:";
	cin>>size;
	fclose(fp);
}
void file::display_file()
{
	cout<<"file name:"<<file_name<<endl;
	cout<<"size:"<<size<<endl;
}
int main()
{
	file f;
	f.read_file();
	f.display_file();
	return 0;
}

