#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
   char data[100];
   
   ofstream outfile;		 // write mode
   outfile.open("aman.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   outfile << data << endl;			// write data into the file.

   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
   
   outfile << data << endl;			// again write inputted data into the file.

   outfile.close();

   ifstream infile; 			//read mode.
   infile.open("aman.dat"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 

   
   cout << data << endl;		// write the data at the screen.
   
   infile >> data; 				// again read the data from the file and display it.
   cout << data << endl; 

   infile.close();

   return 0;
}
