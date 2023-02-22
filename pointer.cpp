#include <iostream>
#include <memory>

using namespace std;


void func1(shared_ptr<int> p1) {
    cout << "func1: " << p1.use_count() << endl;

    cout << "p1: " << p1 << endl;
}



int main() 
{ 
  auto p3 = make_shared<int>(10); 

  cout << "inited: " << p3.use_count() << endl;

  func1(p3);

  cout << "after func1: " << p3.use_count() << endl;

  cout << "unique: " << p3.unique() << endl;

  cout << "p3: " << p3 << endl;

  cout << "p3.get(): " << p3.get() << endl;

  cout << "*p3: " << *p3 << endl;

  cout << "&p3: " << &p3 << endl;
}