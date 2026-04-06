#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(100);
    q.push(200);
    q.push(300);

    cout << "Front: " << q.front() << endl; // 100

    q.pop(); // removes 100

    cout << "New Front: " << q.front() << endl; // 200
    cout << "Queue size: " << q.size() << endl;
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}
