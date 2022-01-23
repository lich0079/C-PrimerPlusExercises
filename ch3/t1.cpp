#include <iostream>

using namespace std;

int main()
{

const int conversionFactor = 12;

int heightInches;
cout << "please input your height in inches:"; 

cin >> heightInches;

cout << "your height is " <<   heightInches/conversionFactor << " feet " << heightInches%conversionFactor  << " inches." << endl;

}