#include <iostream>
using namespace std;

struct Student{
    int id;
    string name;
    float marks;
};

int main(){
    Student *s;
    s->id = 101;
    s->name = "Praveen";
    s->marks = 98;

    cout << "ID: " << s->id << " Name: " << s->name << " Marks: " << s->marks << endl;

    delete s;

    return 0;
}