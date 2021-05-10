#include <iostream> 
#include <string>

char guess; 
int total;  

class Question
{
public:
    void setValues(std::string, std::string, std::string, std::string, std::string, char, int); 
    void askQuestion(); 

private:
    std::string Question_Text;
    std::string answer_1;
    std::string answer_2;
    std::string answer_3;
    std::string answer_4;

    char correct_answer;
    int Question_Score;
};

int main()
{

    std::cout << "Press enter to start...\n";
    std::cin.get();

    std::string name;
    std::cout << "What's your name?\n";
    std::cin >> name;
    std::cout << "\n";

    std::string respond;
    std::cout << "Are you ready to start the quiz, " << name << "? Yes/No.\n";
    std::cin >> respond;

    if (respond == "Yes" || respond == "yes")
	 {
        std::cout << "\n";
        std::cout << "Good luck!\n";
        std::cout << "\n";
        std::cout << "Press enter to continue.";
        std::cin.get();
        std::cin.ignore();
    }
	else
	{
        std::cout << "\n";
        std::cout << "Goodbye!\n";
        std::cin.ignore();
        std::cin.get();
        return 0;
    }
    
    
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    

    q1.setValues("1. What command prints something to the screen?",
        "cin",
        "cout",
        "char",
        "print",
        'b',
        4);

    q2.setValues("2. Which of the following categories does C++ belong to?",
        "Operating System",
        "High-level programming language",
        "low-level programming language",
        "Compiler",
        'b',
        4);

    q3.setValues("3. Which command is correctly written?",
        "cout >>",
        "cin <<",
        "cout <>",
        "cin >>",
        'd',
        4);

    q4.setValues("4. What is this called, <iostream>?",
        "directive",
        "pre-processor directive",
        "file",
        "command",
        'b',
        4);

    q5.setValues("5. What punctuation ends most lines of code?",
        " . ",
        " ; ",
        " : ",
        " ' ",
        'b',
        4);

    //Calling askQuestion member function.
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
   
    //Final score displayed when user finishes 
    std::cout << "Your Total Score is " << total << " out of 50!\n";
    std::cout << "\n";

    //User scores above a 69, user passes the quiz.
    
    if (total > 25)
	{
        
        std::cout << "\n";
        std::cin.get();
        std::cin.ignore();
        return 0;
    }
    else
    {
        std::cout << "You failed... Sorry, better luck next time.\n";
        std::cout << "\n";
    }
    std::cin.get();
    std::cin.ignore();
    return 0;
}

void Question::setValues(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, char ca, int pa)
{
    Question_Text = q;
    answer_1 = a1;
    answer_2 = a2;
    answer_3 = a3;
    answer_4 = a4;
    correct_answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()
{
    std::cout << "\n";
    std::cout << Question_Text << "\n";
    std::cout << "a. " << answer_1 << "\n";
    std::cout << "b. " << answer_2 << "\n";
    std::cout << "c. " << answer_3 << "\n";
    std::cout << "d. " << answer_4 << "\n";
    std::cout << "\n";

    //User enters their answer.
    std::cout << "What is your answer?" << "\n";
    std::cin >> guess;
    //If their answer is correct, message is displayed and 4 points are added to their score.
    if (guess == correct_answer) {
        std::cout << "\n";
        std::cout << "Correct!" << "\n";
        total = total + Question_Score;
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
    else //If their answer is incorrect, message is displayed, no points added. 
         //Correct answer displayed. 
    {
        std::cout << "\n";
        std::cout << "Sorry, you're wrong..." << "\n";
        std::cout << "The correct answer is " << correct_answer << "." << "\n";
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
}
