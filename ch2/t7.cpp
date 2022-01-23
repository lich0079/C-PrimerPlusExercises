#include <iostream>

using namespace std;

void display(int hours, int minutes)
{
    cout << "Time:" << hours << "." << minutes <<  endl;
}

int main()
{

    int hours;
    cout << "Enter the number of hours:"; 

    cin >> hours;

    int minutes;
    cout << "Enter the number of minutes:"; 

    cin >> minutes;

    display(hours, minutes);
}