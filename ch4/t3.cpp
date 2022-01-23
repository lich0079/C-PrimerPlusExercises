#include <iostream>
#include <string>

using namespace std;

int main()
{

const int conversionFactor = 12;

string firstName;
cout << "Enter your first name:"; 
cin >> firstName;

string lastName;
cout << "Enter your last name:"; 
cin >> lastName;

string fullName =  firstName + " " + lastName;

cout << "Here’s the information in a single string:" << fullName << endl; 


}