#include<iostream>
#include<fstream>
using namespace std;
class quiz
{
    string ques_no;
    string question;
    string option_a;
    string option_b;
    string option_c;
    string option_d;
public:
    void start_quiz()
    {
        char op;
        ifstream fin("Question.001");
        getline(fin,ques_no,',');
        getline(fin,question,',');
        getline(fin,option_a,',');
        getline(fin,option_b,',');
        getline(fin,option_c,',');
        getline(fin,option_d,',');
        fin.close();

        cout<<"QUIZ PROGRAM"<<endl<<endl;
        cout<<ques_no<<". ";
        cout<<question<<endl;
        cout<<"a) "<<option_a<<endl;
        cout<<"b) "<<option_b<<endl;
        cout<<"c) "<<option_c<<endl;
        cout<<"d) "<<option_d<<endl;
        cout<<"Enter option: ";
        cin>>op;

    }
};
