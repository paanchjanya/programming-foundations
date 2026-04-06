// Pointers to Structures
#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
};
int main(){
    Student s1 = {101,"Praveen_Desai"};
    Student* ptr = &s1;

    // Acess using pointer
    cout << "ID: " << ptr->id << endl;
    cout << "Name: " << ptr->name << endl;

    return 0;
}
