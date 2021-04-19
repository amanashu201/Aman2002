
#include <stdio.h>
#include <iostream>
using namespace std;
 
class square_root
{
private:
	int number;
	int start=0, end=number;
	int mid,i,n;
	float findSQRT(int number);
	float ans;
public:
	void squareroot_list();
	void Display_squareroot();	
};
void square_root::squareroot_list()
{
    while (start <= end)
    {
        mid = (start + end) / 2;
 
        if (mid * mid == number)
        {
            ans = mid;
            break;
        }
 
        if (mid * mid < number)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    float increment = 0.1;
    for( i = 0; i < 5; i++)
    {
        while (ans * ans <= number)
        {
            ans += increment;
        }
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}
void square_root::display_squareroot();

 
int main()
{
    int N;
    cout<<"please enter a number:";
    cin<<n;
    cout<<"find square root:";
    cin<<findSQRT(N);
    
    squareroot s;		
	s.square_root();
	s.Display_squareroot();
	
    return 0;
}

