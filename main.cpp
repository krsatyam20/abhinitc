#include <fstream>
#include <iostream>
using namespace std;

int main () {
   char input[75];

   ofstream os;
   os.open("testout.txt");  //Create a file if file is not exist
   cout <<"Writing to a text file:" << endl;
   cout << "Please Enter your name: ";
   cin.getline(input, 100);
   os << input << endl;
   cout << "Please Enter your age: ";
   cin >> input;

   os << input << endl;
   os.close();

   ifstream is;
   string line;
   is.open("testout.txt");
   cout << "Reading from a text file:" << endl;
   while (getline (is,line))
   {
   cout << line << endl;
   }
   is.close();
   return 0;
}
