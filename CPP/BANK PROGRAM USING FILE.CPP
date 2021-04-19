#include<iostream>
#include<fstream>
using namespace std;

class account
{
    int acno;
    char name[50];
    int deposit;
    char type;
public:
    void getdata()
    {
    	cout <<"Enter Account No.:";
    	cin >> acno;
    	cout <<"Enter Account Holder Name:";
    	cin >>name;
    	cout <<"Enter Type of The account (C/S):";
    	cin >> type;
    	cout <<"Enter The Initial amount(>=500 for Saving and >=1000 for current ):";
    	cin >> deposit;
    	cout <<"account Created..";
	}
	void putdata()
	{
	   cout <<"Account No.: " << acno<<endl;
       cout <<"Account Holder Name: " <<name<<endl;
       cout <<"Type of Account: " << type<<endl;
       cout <<"Balance amount: " << deposit<<endl;
	}
};
class create_account : public account 
{
	public:
		void getdata()
		{
			
		}
		void putdata()
		{
			account::putdata();
		}
};

    
	
class modify_account : public account
{
	int acno;
	char name[20];char type[20];
	float deposit;
	public:
		void getdata()
		{
			account::getdata();
			cout << "Account No.: ";
			cin >> acno;
       		cout <<"Modify Account Holder Name : ";
      		cin>>name;
       		cout <<"Modify Type of Account :";
       		cin >> type;
            cout <<"Modify Balance amount : ";
            cin >> deposit;
		}
		void putdata()
		{
			account::putdata();
			cout<<"Account Number: "<<acno<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Type: "<<type<<endl;
			cout<<"Bailance amount: "<<deposit<<endl;
		}
}; 

void write_account();      
void display_sp(int);      
void modify_account(int); 
void delete_account(int);  
void display_all();        
void deposit_withdraw(int, int); 
void intro(); 

int main()
{
    char ch;
    int num;
    system("cls");
    intro();
    cout <<"\n\nMAIN MENU"<<endl;
    cout <<"01. NEW ACCOUNT"<<endl;
    cout <<"02. DEPOSIT AMOUNT"<<endl;
    cout <<"03. WITHDRAW AMOUNT"<<endl;
    cout <<"04. BALANCE ENQUIRY"<<endl;
    cout <<"05. ALL ACCOUNT HOLDER LIST"<<endl;
    cout <<"06. CLOSE AN ACCOUNT"<<endl;
    cout <<"07. MODIFY AN ACCOUNT"<<endl;
    cout <<"08. EXIT"<<endl;
    cout <<"Select Your Option (1-8) ";
    cin >> ch;
    switch (ch)
    	{
    		case '1':
                write_account();
                break;
            case '2':
                cout <<"Enter The account No.:"; 
				cin >> num;
                deposit_withdraw(num, 1);
            	break;
            case '3':
                cout <<"Enter The account No.:";
				cin >> num;
                deposit_withdraw(num, 2);
                break;
            case '4':
                cout <<"Enter The account No.:"; 
				cin >> num;
                break;
            case '5':
                display_all();
            	break;
            case '6':
                cout <<"Enter The account No.:"; 
				cin >> num;
                delete_account(num);
                break;
              case '7':
                cout <<"Enter The account No.:"; 
				cin >> num;
                modify_account(num);
                break;
              case '8':
                cout <<"Thanks for using bank managemnt system";
                break;
              default:cout << "\a";
		}
              
       return 0;
}
	
void write_account()
{
    account ac;
    ofstream outFile;
    outFile.open("account.dat");
   
    outFile.close();
}
  
void display_sp(int)
{
		account ac;
       ifstream inFile;
       inFile.open("account.dat", ios::binary);
       if (!inFile)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       cout << "\nBALANCE DETAILS\n";
       
       inFile.close();
       
	
}  
void modify_account(int)
{
	bool found = false;
       account ac;
       fstream File;
       File.open("account.dat", ios::binary | ios::in | ios::out);
       if (!File)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       while (!File.eof() && found == false)
       {
              File.read(reinterpret_cast<char *> (&ac), sizeof(account));
             
       }
       File.close();
       if (found == false)
              cout << "\n\n Record Not Found ";
	
}  
void delete_account(int)
{
	account ac;
       ifstream inFile;
       ofstream outFile;
       inFile.open("account.dat", ios::binary);
       if (!inFile)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       outFile.open("Temp.dat", ios::binary);
       inFile.seekg(0, ios::beg);
       while (inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
         
       inFile.close();
       outFile.close();
       remove("account.dat");
       rename("Temp.dat", "account.dat");
       cout << "\n\n\tRecord Deleted ..";
	
}  
void display_all()
{
	 account ac;
       ifstream inFile;
       inFile.open("account.dat", ios::binary);
       if (!inFile)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       cout << "\n\n\t\tACCOUNT HOLDER LIST\n\n";
       cout << "====================================================\n";
       cout << "A/c no.      NAME           Type  Balance\n";
       cout << "====================================================\n";
       
       inFile.close();
}        
void deposit_withdraw(int, int)
{
	 int amt;
       bool found = false;
       account ac;
       fstream File;
       File.open("account.dat", ios::binary | ios::in | ios::out);
       if (!File)
       {
              cout << "File could not be open !! Press any Key...";
              return;
       }
       while (!File.eof() && found == false)
       {
              File.read(reinterpret_cast<char *> (&ac), sizeof(account));
              int pos = (-1)*static_cast<int>(sizeof(ac));
                     File.seekp(pos, ios::cur);
                     File.write(reinterpret_cast<char *> (&ac), sizeof(account));
                     cout << "\n\n\t Record Updated";
                     found = true;
              
       }
}
void intro()
{
       cout<<"WELCOME YOUR OWN BANK"<<endl;
       cout<<"---------------------"<<endl;
       cout <<"Please enter name:";
}


