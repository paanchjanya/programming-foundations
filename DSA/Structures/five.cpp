// Functions Inside Structure
#include <iostream>
using namespace std;

struct Student{
    int id;
    string name;
    float percentage;

    void display(){
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << endl;
    }
};
int main(){
    Student s1 = {101,"Praveen_Desai",89.5};
    s1.display();
    return 0;
}


// Summary Table
// struct              struct Student{.......};
// .                      s1.name
// ->                     ptr->id
// []                      s[3]
// composition            Student has Date dob;
// Inside struct            void display()
