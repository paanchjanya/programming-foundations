#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }

    cout << "\nSize: " << v.size() << endl;

    v.pop_back();

    cout << "After pop_back, last element: " << v.back() << endl;

    return 0;
}