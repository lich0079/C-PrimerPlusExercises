#include <iostream>

using namespace std;

int main()
{


int fisrtInt;
cout << "please input fisrtInt:"; 
cin >> fisrtInt;

int secInt;
cout << "please input secInt:"; 
cin >> secInt;

int sum = 0;
for(int i = fisrtInt;i<=secInt; i++)
{
    sum += i;
}

cout << "sum is " << sum << endl;

}