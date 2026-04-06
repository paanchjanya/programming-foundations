#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(100);
    s.push(200);
    s.push(300);

    cout << "Top element: " << s.top() << endl; // 300

    s.pop(); // removes 300
    cout << "Top after pop: " << s.top() << endl; // 200

    cout << "Stack size: " << s.size() << endl;
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}
