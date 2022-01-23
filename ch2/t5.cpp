#include <iostream>

using namespace std;

double convert(int celsius)
{
    double fahrenheit = 1.8* celsius + 32;

    return fahrenheit;
}

int main()
{

    int celsius;
    cout << "Please enter a Celsius value:"; 

    cin >> celsius;

    cout << celsius << " degrees Celsius is " << convert(celsius) << " degrees Fahrenheit." <<  endl;

}