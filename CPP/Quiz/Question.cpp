#include<iostream>
#include<fstream>
using namespace std;
class question
{
    int ques_no;
    string question;
    string option_a;
    string option_b;
    string option_c;
    string option_d;
    string correctop;
public:
    void new_question();
    void menu();
};

void question::menu()
{
    int ch;
    cout<<"QUESTION MENU:"<<endl;
    cout<<"1. New Question"<<endl;
    cout<<"0 . Exit"<<endl;
    cout<<"Enter choice: ";
    cin>>ch;
    switch(ch)
    {
        case 0:
            break;
        case 1:
            new_question();
            menu();
            break;
        default:
            cout<<"Invalid option"<<endl;
    }
}
void question::new_question()
{
    cout<<"Enter question id: ";
    cin>>ques_no;
    cout<<"Enter question: ";
    getchar();
    getline(cin,question);
    cout<<"Enter option_a: ";
    getline(cin,option_a);
    cout<<"Enter option_b: ";
    getline(cin,option_b);
    cout<<"Enter option_c: ";
    getline(cin,option_c);
    cout<<"Enter option_d: ";
    getline(cin,option_d);
    cout<<"Correct Option: ";
    getline(cin,correctop);

    ofstream fout("Question.001", ios::app);
    fout<<ques_no<<",";
    fout<<question<<",";
    fout<<option_a<<",";
    fout<<option_b<<",";
    fout<<option_c<<",";
    fout<<option_d<<",";
    fout<<correctop<<","<<endl;
    fout.close();
}