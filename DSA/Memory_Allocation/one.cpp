#include <iostream>
using namespace std;

struct MyStruct{
    int i;
    float f;
    char c;
};

union MyUnion{
    int i;
    float f;
    char c;
};

int main(){
    cout << "Size of struct: " << sizeof(MyStruct) << " bytes" << endl;
    cout << "Size of union: " << sizeof(MyUnion) << " bytes" << endl;

    return 0;
}
