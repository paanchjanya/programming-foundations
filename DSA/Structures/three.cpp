// Nested Structures (Structure within Structure)
#include <iostream>
using namespace std;

struct Date{
    int day, month, year;
};

struct Student{
    int id;
    string name;
    Date dob;
};
int main(){
    Student s1;
    s1.id = 101;
    s1.name = "Praveen_Desai";
    s1.dob = {24, 1, 2004};

    cout << "------Student Details------\n";
    cout <<"ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "DOB: " << s1.dob.day << "-" << s1.dob.month << "-" << s1.dob.year << endl;

    return 0;
}
