#include<iostream>
class Employee
{
public:
    std::string name;
    int age;
    static int id;

    Employee::Employee()
    {
        id++;
    }
};

int Employee::id = 0;

std::ostream& operator<<(std::ostream& out, const std::vector<Employee>& v)
{
    out << "[";
    for (size_t i = 0; i < v.size(); ++i)
    {
        out << "ID: " << v[i].id <<  " Name: " << v[i].name << " age: " << v[i].age;
        if (i != v.size() - 1)
            out << ", ";
    }
    out << "]";

    return out;
}

Employee generate_random_employee(Employee obj)
{
    std::vector<std::string> male_names = {"Donald", "Piotr", "James", "Tiny", "Ricky"};
    std::vector<std::string> female_names = {"Diana", "Joelle", "Sue", "Karolina"};
    std::vector<std::string> lastnames = {"Lester", "Pound", "Park", "Ennis", "Duck",
                                        "Tusk", "Disney", "Jurassic", "Looney-Warde" };

    int sex = (rand() % 2) + 0;

    if (sex == 1)
    {
        obj.name = male_names[(rand() % (male_names.size() - 1)) + 0];
    }
    else
    {
        obj.name = female_names[(rand() % (female_names.size() - 1)) + 0];
    }

    obj.name += " " + lastnames[(rand() % (lastnames.size() - 1)) + 0];
    obj.age = (rand() % 24) + 25;

    return obj;
}

int main()
{
    srand(time(NULL));

    std::vector<Employee> employees;
    Employee some_new_employee;

    for(int i = 0; i < 2; i++)
    {
        some_new_employee = generate_random_employee(some_new_employee); //randomly generate a new employee. It is Employee type function
        employees.push_back(some_new_employee);
    }

    std::cout << employees << std::endl;
}
