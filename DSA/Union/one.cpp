#include<iostream>
using namespace std;

union Data{
    int intValue;
    float floatValue;
    char charValue;
};
int main(){
    Data d;

    // Assign and print intValue
    d.intValue = 10;
    cout << "intValue: " << d.intValue << endl;

    // Now assign floatValue
    d.floatValue = 12.5;
    cout << "floatValue: " << d.floatValue << endl;

    // After assigning floatValue, intValue is no longer valid
    cout << "intValue (after floatValue): " << d.intValue << endl;

    // Now assign charValue
    d.charValue = 'A';
    cout << "charValue: " << d.charValue << endl;

    return 0;
}
