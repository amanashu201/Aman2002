#include <iostream> 
using namespace std; 
  
void replaceDemo(string s1, string s2, string s3, string s4) 
{ 
	s1.replace(0, 7, s2); 	//Replaces 7 characters from 0th index by s2 
    cout << s1 << endl; 
  
    s4.replace(0, 3, "Hello "); 		//// Repalces 3 characters from 0th index with "Hello" 
    cout << s4 << endl; 
  
    s4.replace(6, 5, s3, 0, 5); 		//// Replaces 5 characters from 6th index of s4 with ,,5 characters from 0th of s3 
    cout << s4 << endl; 
  
    // Replaces 5 charcaters from 6th index of s4 with 
    // 6 characters from string "to all" 
    s4.replace(6, 5, "to all", 6); 
    cout << s4 << endl; 
  
    // Replaces 1 character from 12th  index of s4 with 
    // 3 copies of '!' 
    s4.replace(12, 1, 3, '!'); 
    cout << s4 << endl; 
} 
  
int main() 
{ 
    string s1 = "Example of replace"; 
    string s2 = "Demonstration"; 
    string s3 = "how are you"; 
    string s4 = "HeyWorld !"; 
  
    replaceDemo(s1, s2, s3, s4); 
    return 0; 
} 
