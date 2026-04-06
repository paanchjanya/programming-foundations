// Array of Structure
#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float percentage;
};
int main(){
    Student s[3];

    for (int i = 0; i < 3; ++i) {
        cout << "------Enter the details for student " << i+1 << ":\n";
        cout << "ID: "; cin >> s[i].id;
        cout << "Name: "; cin >> s[i].name;
        cout << "Percentage: "; cin >> s[i].percentage;
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 3; ++i){
        cout << "ID: " << s[i].id << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Percentage: " << s[i].percentage << "%" << endl;
    }
    return 0;
}
