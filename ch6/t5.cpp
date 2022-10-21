#include <iostream>

using namespace std;

int main()
{


double income;
cout << "Enter your income:"; 
cin >> income;

double remain = income;
double tax = 0;
if (remain >= 5000) {
    remain -= 5000;
}

if (remain > 10000) {
    tax += 10000*0.1;
    remain -= 10000; 
} else if (remain > 0) {
    tax += remain * 0.1;
    remain = 0;
}

if (remain > 20000) {
    tax += 20000*0.15;
    remain -= 20000; 
} else if (remain > 0) {
    tax += remain * 0.15;
    remain = 0;
}

tax += remain*0.2;
remain = 0; 

cout << "tax:" << tax << endl;

}