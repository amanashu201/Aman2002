#include<cstdlib>
#include "Contestant.cpp"
#include "Question.cpp"
#include "Quiz.cpp"

class start
{

public:
	void main_menu();
};

void start::main_menu()
{
	contestant c;
	question q;
	quiz qz;
	int ch;
	cout<<"MAIN MENU:"<<endl;
	cout<<"1. Question Menu"<<endl;
	cout<<"2. Contestant Menu"<<endl;
	cout<<"3. Quiz"<<endl;
	cout<<"0. Exit"<<endl;
	cout<<"Enter Choice: ";
	cin>>ch;
	switch(ch)
	{
		case 0:
			exit(0);
			break;
		case 1:
			q.menu();
			main_menu();
			break;
		case 2:
			c.menu();
			main_menu();
		case 3:
				qz.start_quiz();
				break;
		default:
			cout<<"Invalid option!"<<endl;
			main_menu();
	}
}
int main()
{
	start s;
	s.main_menu();
	return 0;
}