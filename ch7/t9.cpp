#include <iostream>
#include <string>

using namespace std;

const int SLEN = 30; 

struct student {
    char fullname[SLEN]; 
    char hobby[SLEN]; 
    int ooplevel;
};


int getinfo(student pa[], int n)
{
    int entered = 0;

    while (entered < n)
    {

            cout << "Enter student " << entered +1 << endl; 
            cout << "Input student fullname:"; 
            // char fullname[SLEN]; 
            cin >> pa[entered].fullname;



            cout << "Input student hobby:"; 
            // char hobby[SLEN]; 
            cin >> pa[entered].hobby;

            cout << "Input student ooplevel:"; 
            // int ooplevel; 
            cin >> pa[entered].ooplevel;

            if (cin.get() == '\n') {
                break;
            }
            entered++;
    }

    return entered;
}


void display1(student st)
{
    cout << "fullname:" <<st.fullname  << ",hobby:" <<st.hobby << ",ooplevel:" <<st.ooplevel << endl;
}


void display2(const student * ps)
{
    {
    cout << "fullname:" <<ps->fullname  << ",hobby:" <<ps->hobby << ",ooplevel:" << ps->ooplevel  << endl;
}
}


void display3(const student pa[], int n)
{

}

int main() {
    cout << "Enter class size: "; 
    int class_size;
    cin >> class_size;
    // while (cin.get() != '\n') 
    //     continue;
    student * ptr_stu = new student[class_size]; 
    int entered = getinfo(ptr_stu, class_size); 
    for (int i = 0; i < entered; i++)
    {
    display1(ptr_stu[i]);
    display2(&ptr_stu[i]); 
    }
    display3(ptr_stu, entered); 
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}



