#include <iostream>

using namespace std;

int main()
{

cout << "BMI calculator===========" << endl; 

const int conversionFactor = 12;

int heightInches;
cout << "please input your height in inches:"; 

cin >> heightInches;


int pounds;
cout << "please input your weight in pounds:"; 

cin >> pounds;

double meters = heightInches * 0.0254;

double kg = pounds/2.2;

cout << "your BMI is " <<   kg/(meters*meters) << "." << endl;

}