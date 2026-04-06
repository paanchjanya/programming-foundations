// Sample code for structure 
#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float percentage;
};

int main(){
    Student s1;

    s1.id = 101;
    s1.name = "Praveen Desai";
    s1.percentage = 89.5;

    cout << "------Student Details------" << endl;
    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Percentage: " << s1.percentage << endl;

    return 0;
}
