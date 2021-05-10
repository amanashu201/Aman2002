#include<iostream>
#include<fstream>
using namespace std;
class contestant
{
    int cid;
    string name;
    string gender;
    string dob;
public:
    void menu();
    void new_contestant();
    //void edit_contestant();
};
void contestant :: menu()
{
    int ch;
    cout<<"CONTESTANT MENU:"<<endl;
    cout<<"1. New Contestant"<<endl;
    cout<<"2. Edit Contestant"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            new_contestant();
            menu();
            break;
        case 2:
            //edit_contestant();
            menu();
            break;
        default:
            cout<<"Invalid option!"<<endl;
            menu();
    }
}
void contestant :: new_contestant()
{
    cout<<"Enter contestant id: ";
    cin>>cid;
    cout<<"Enter contestant name: ";
    getline(cin,name);
    cout<<"Enter contestant gender: ";
    cin>>gender;
    cout<<"Enter contestant date of birth: ";
    cin>>dob;

    ofstream fout("Contestant.001", ios::app);
    fout<<cid<<",";
    fout<<name;
    fout<<",";
    fout<<gender<<",";
    fout<<dob<<","<<endl;
    fout.close();
    cout<<"Contestant created successfully!"<<endl;
}
