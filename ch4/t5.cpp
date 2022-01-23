#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calories;
};

int main()
{

CandyBar snack = 
{
    "Sugar",  0.11, 100
};

cout << "Here’s the snack:" << snack.brand << endl; 

cout << "Here’s the snack size:" << sizeof(snack) << endl; 

cout << "Here’s the snack brand size:" << sizeof(snack.brand) << endl; 

cout << "Here’s the snack weight size:" << sizeof(snack.weight) << endl; 

cout << "Here’s the snack calories size:" << sizeof(snack.calories) << endl; 

CandyBar*  another = new CandyBar;

another->brand = "Test";

cout << "another:" << another << endl; 

cout << "another brand:" << another->brand << endl; 

cout << "Here’s the snack address:" << &snack << endl; 

}