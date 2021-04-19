#include<iostream>
//#include<process.h>
#include<fstream>
using namespace std;
class product 
{
    int pno;
    char name[50];
    float price, qty, tax, dis;
public:
    void create_product() 
    {
      	cout <<endl<< " Enter Product No :";
        cin >> pno;
        cout <<endl<<endl<< " Enter Name of Product : ";
        gets(name);
        getchar();
        cout << endl<<" Enter Price of Product : ";
        cin >> price;
        cout <<endl<< "Please Enter Discount (%) :";
        cin >> dis;
    }

    void show_product() 
    {
    	cout << "\n Product No : " << pno;
        cout << "\nThe Name of Product : ";
        puts(name);
        getchar();
        cout << "\nThe Price of Product : " << price;
        cout << "\nDiscount : " << dis;
    }

int retpno() 
{
    return pno;
}

float retprice() 
{
    return price;
}

char * retname() 
{
    return name;
}

int retdis() 
{
    return dis;
}

}; 

// global declaration for stream object, object
fstream fp;
product pr;

void write_product() 		// function to write in file
{
    fp.open("Shop.dat", ios::out | ios::app);
    pr.create_product();
    fp.write((char * ) & pr, sizeof(product));
    fp.close();
    cout <<"The Product Has Been Created ";
    getchar();
}

void display_all() 							// function to read all records from file
{
    cout <<endl<<endl<<endl<<"\t\tDISPLAY ALL RECORD !!!"<<endl<<endl;
    fp.open("Shop.dat", ios:: in );
    while (fp.read((char * ) & pr, sizeof(product))) 
    {
        pr.show_product();
        cout << "\n\n====================================\n";
        getchar();
    }
    fp.close();
    getchar();
}

void display_sp(int n) 								// function to read specific record from file
{
    int flag = 0;
    fp.open("Shop.dat", ios:: in );
    while (fp.read((char * ) & pr, sizeof(product))) 
    {
        if (pr.retpno() == n) 
        {
            pr.show_product();
            flag = 1;
        }
    }
    fp.close();
    if (flag == 0)
        cout << "\n\nrecord not exist";
    getchar();
}

void modify_product() 				// function to modify record of file
{
	char ch;
    int no, found = 0;
    cout <<endl<<endl<< "\tTo Modify ";
    cout <<endl<< "\t Enter Product No.:";
    cin >> no;
    fp.open("Shop.dat", ios:: in | ios::out);
    while (fp.read((char * ) & pr, sizeof(product)) && found == 0) 
    {
        if (pr.retpno() == no) 
        {
            pr.show_product();
            cout << "\n Enter New Details of Product" << endl;
            pr.create_product();
            int pos = -1 * sizeof(ch);
            fp.seekp(pos, ios::cur);
            fp.write((char * ) & pr, sizeof(product));
            cout << "\n\n\t Record Updated";
            found = 1;
        }
    }
    fp.close();
    if (found == 0)
        cout << "\n\n Record Not Found ";
    getchar();
}

void delete_product() 					// function to delete record of file
{
    int no;
    
    cout << "\n\n\n\tDelete Record";
    cout << "\n\n Enter product no. You Want To Delete";
    cin >> no;
    fp.open("Shop.dat", ios:: in | ios::out);
    fstream fp2;
    fp2.open("Temp.dat", ios::out);
    fp.seekg(0, ios::beg);
    while (fp.read((char * ) & pr, sizeof(product))) 
    {
        if (pr.retpno() != no) 
        {
            fp2.write((char * ) & pr, sizeof(product));
        }
    }
    fp2.close();
    fp.close();
    remove("Shop.dat");
    rename("Temp.dat", "Shop.dat");
    cout << "\n\n\tRecord Deleted ..";
    getchar();
}
void main()
{
	int 
}
void menu() 				/// function to display all products price list

{
   
    fp.open("Shop.dat", ios:: in );
    if (!fp) 
    {
        cout << "ERROR!!! FILE COULD NOT BE OPEN\n\n\n Go To Admin Menu to create File ";
        cout << "\n\n\n Program is closing ....";
        getchar();
        exit(0);
    }

    cout << "\n\n\t\tProduct MENU\n\n";
    cout << "====================================================\n";
    cout << "P.NO.\t\tNAME\t\tPRICE\n";
    cout << "====================================================\n";

    while (fp.read((char * ) & pr, sizeof(product))) 
    {
        cout << pr.retpno() << "\t\t" << pr.retname() << "\t\t" << pr.retprice() << endl;
    }
    fp.close();
}
void place_order()				// function to display all products price list 
{
    int order_arr[50], quan[50], c = 0;
    float amt, damt, total = 0;
    char ch = 'Y';
    menu();
    cout << "\n============================";
    cout << "\n PLACE YOUR ORDER";
    cout << "\n============================\n";
    do 
    {
        cout << "\n\nEnter Product No. : ";
        cin >> order_arr[c];
        cout << "\nQuantity in number : ";
        cin >> quan[c];
        c++;
        cout << "\nDo You Want To Order Another Product ? (y/n)";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    cout << "\n\nThank You For Placing The Order";
    getchar();

    cout << "\n\n******************************** INVOICE ************************\n";
    cout << "\nPr No.\tPr Name\tQuantity \tPrice \tAmount \tAmount after discount\ n ";
    for (int x = 0; x <= c; x++) 
    {
        fp.open("Shop.dat", ios:: in );
        fp.read((char * ) & pr, sizeof(product));
        while (!fp.eof()) 
        {
            if (pr.retpno() == order_arr[x]) 
            {
                amt = pr.retprice() * quan[x];
                damt = amt - (amt * pr.retdis() / 100);
                cout << "\n" << order_arr[x] << "\t" << pr.retname() <<
                    "\t" << quan[x] << "\t\t" << pr.retprice() << "\t" << amt << "\t\t" << damt;
                total += damt;
            }
            fp.read((char * ) & pr, sizeof(product));
        }

        fp.close();
    }
    cout << "\n\n\t\t\t\t\tTOTAL = " << total;
    getchar();
}

void intro() 				// INTRODUCTION FUNCTION
{
    cout << "GROCERY MARKET"<<endl<<endl;
    cout << "MADE BY : AMAN SINGH";
    getchar();

}

void admin_menu() 							// ADMINSTRATOR MENU FUNCTION
{
    char ch2;
    cout <<endl<<"\tADMIN MENU";
    cout <<endl<<"\t1.CREATE PRODUCT";
    cout <<endl<<"\t2.DISPLAY ALL PRODUCTS";
    cout <<endl<<"\t3.QUERY ";
    cout <<endl<<"\t4.MODIFY PRODUCT";
    cout <<endl<<"\t5.DELETE PRODUCT";
    cout <<endl<<"\t6.VIEW PRODUCT MENU";
    cout <<endl<<"\t7.BACK TO MAIN MENU";
    cout <<endl<<"\tPlease Enter Your Choice (1-7) ";
    ch2 = getchar();
    switch (ch2) 
    {
    case '1':
        write_product();
        break;
    case '2':
        display_all();
        break;
    case '3':
        int num;
        cout << endl<<"\tPlease Enter The Product No. ";
        cin >> num;
        display_sp(num);
        break;
    case '4':
        modify_product();
        break;
    case '5':
        delete_product();
        break;
    case '6':
        menu();
        getchar();
    case '7':
        break;
    default:
        cout << "\a";
        admin_menu();
    }
}

// THE MAIN FUNCTION OF PROGRAM
int main() 
{
    char ch;
    intro();
    do 
    {
        cout <<endl<<endl<<"\tMAIN MENU"<<endl;
        cout <<endl<< "\t01. CUSTOMER"<<endl;
        cout <<endl<< "\t02. ADMINISTRATOR"<<endl;
        cout <<endl<< "\t03. EXIT"<<endl;
        cout <<endl<< "\tPlease Select Your Option (1-3) ";
        cin>>ch;
        switch (ch) 
        {
        case '1':
            place_order();
            getchar();
            break;
        case '2':
            admin_menu();
            break;
        case '3':
            exit(0);
        default:
            cout << "\a";
        }
    } while (ch != '3');
}


