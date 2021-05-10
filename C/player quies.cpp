#include<iostream>
#include<fstream>

using namespace std;
class match
{
private:
	int x;
	char name[20];
	char s[100],ans;
    int roll;
   

public:
	void playersbio();
	void display();
	void showdata();
    
};
void match :: playersbio()
{
    cout<<"\t\t\tExaminee Name:";
    cin>>name;
    cout<<"\t\t\tExaminee roll:";
    cin>>roll;
}
void match :: display()
{
    cout<<"\n Result:\n";
    cout<<"\t"<<name<<"Total marks  "<<x<<" marks,out of 50\n";
}
void  match:: showdata()
{
	ifstream in;
    char a;
    int i=0;
    in.open("ques.txt");
    while(in.eof()==0)
    {
    in.getline(s,100);
    cout<<endl<<s;
    if(i==2)
    {
    	in.get(a);
   		cout<<"\nans:";
    	cin>>ans;
    if(ans==a)
       {
       		x=x+2;
       		cout<<" Your ans  correct.\n";
       }
    else
       {
       		cout<<"Wrong ans.\n";
       }
    }
    	i++;
	}
   in.close();
   

}
	      
      
int main()
{
	char ch;
    
	match m;
	
    
    cout<<"\t\t\tQUIZ CONTEST \t      Total Marks:50\n\n";
    cout<<"******************************************************************************************************"<<endl;
	m.playersbio();
    
    
    cout<<"\t2marks per Questions";
    cout<<"\n\n\tselect your choice:\n"
        <<"\n\t1-START EXAM"
        <<"\n\t2-WITHDRAW EXAM :";

       switch(ch)
       {
       		case 1:
    			m.display();
    			m.showdata();
        		break;
       		case 0:
        		exit(1);
       		default:
        		cout<<"invalid choice!";
       }
}
