#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;

class account
{
    int acno;
    char name[50];
public:
    void getdata()
    {
        cout <<"\nEnter account no. ";
        cin >> acno;
        cout <<"\nEnter account holder name ";
        gets(name);
    }

    void putdata()
    {
        cout <<"Account No. : " << acno<<endl;
        cout <<"Account Holder Name : " << name<<endl;
    }
	 
    int retacno()
    {
        return acno;
    }
};

void account_record()
{
    ofstream outFile;
    outFile.open("Account.dat", ios::binary | ios::app);

    account ac;
    ac.getdata();
    
    outFile.write((char*)&ac, sizeof(ac));
    
    outFile.close();
}

void display()
{
    ifstream inFile;
    inFile.open("Account.dat", ios::binary);

    account ac;
    
    while(inFile.read((char*)&ac, sizeof(ac)))
    {
        ac.putdata();
    }        
    
    inFile.close();
}
void search(int n)
{
    ifstream inFile;
    inFile.open("Account.dat", ios::binary);
    
    account ac;

    while(inFile.read((char*)&ac, sizeof(ac)))
    {
        if(ac.retacno() == n)
        {
            ac.putdata();
        }
    }
    
    inFile.close();
}


void delete_record(int n)
{
    account ac;
    ifstream inFile;
    inFile.open("account.dat", ios::binary);

    ofstream outFile;
    outFile.open("temp.dat", ios::out | ios::binary);
    
    while(inFile.read((char*)&ac, sizeof(ac))
	{
        if(ac.retacno() != n)
        {
            outFile.write((char*)&ac, sizeof(ac));
        }
    }

    inFile.close();
    outFile.close();
    
    remove("account.dat");
    rename("temp.dat", "account.dat");
}


void modify_record(int n)
{
    fstream file;
    file.open("account.dat",ios::in | ios::out);

    account ac;

    while(file.read((char*)&ac, sizeof(ac)))
    {
        if(ac.retacno() == n)
        {
            cout <<"Enter the new details of account";
            ac.getdata();
            
            int pos = -1 * sizeof(ac);
            file.seekp(pos, ios::cur);
			
            file.write((char*)&ac, sizeof(ac));
        }
    }
  
    file.close();
}

int main()
{
    account ac;
	ac.getdata();

	ac.retacno();   
    cout <<"\n\nList of records";
    display();
	
    cout <<"\n\nSearch result";
    
    cout <<"\n\nRecord Deleted";
	
    cout <<"\n\nModify Record  ";
   
	
    return 0;
}
