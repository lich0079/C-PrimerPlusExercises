#include <iostream>

using namespace std;


class Person
{
public:
	int age;
	string name;

	Person(){
    cout << "Constructor" << endl;
  }
	Person(const Person& p)
	{
		cout << "Copy Constructor" << endl;
	}

	Person& operator=(const Person& p)
	{
		cout << "Assign" << endl;
		return *this;
	}

  void print() {
    cout << "age:" << age  << ",name:" << name << endl;
  }

private:

};


void f(Person p)
{
	return;
}

Person f1()
{
	Person p;
	return p;
}

// 编译时用  g++ -std=c++11 -fno-elide-constructors  copy.cpp
int main()
{
	Person p;         //  调用 Constructor
  cout << "1-----------" << endl;
	Person p1 = p;    //  调用 Copy Constructor， 有新对象产生
  cout << "2-----------" << endl;
	Person p2;        //  调用 Constructor
  cout << "3-----------" << endl;
	p2 = p;           //  调用 Assgin, 没有新对象产生
  cout << "4-----------" << endl;
	f(p2);            //  调用 Copy Constructor， 实参到形参
  cout << "5-----------" << endl;

	p2 = f1();        //  f1里面调用 Constructor，return的时候调用Copy Constructor， 然后调用 Assgin
  cout << "6-----------" << endl;
	Person p3 = f1(); //  f1里面调用 Constructor，return的时候调用Copy Constructor，然后调用 Copy Constructor
  cout << "7-----------" << endl;



  Person person;
  person.age = 1;
  person.name = "lich";
  person.print();
  Person person2 = person;
  person2.print();

  Person person3;
  person3 = person;
  person3.print();
	return 0;
}
