#include <iostream>
using namespace std;

#define MAX 100

class Stack{
    private:
        int arr[MAX];
        int top;

    public:
        Stack(){
            top = -1;  // Stack is initially empty
        }
    
        void push(int x) {
            if (top >= MAX - 1) {
                cout << "Stack Overflow\n";
                return;
            }
            arr[++top] = x;
            cout << x << " pushed to stack\n";
        }

        void pop(){
            if(top < 0){
                cout << "Stack Underflow\n";
                return;
            }
            cout << arr[top--] << " popped from stack\n";
        }

        int peek(){
            if(top < 0) {
                cout << "Stack EMpty";
                return -1;
            }
            return arr[top];
        }

        bool isEmpty() {
            return (top < 0);
        }

        int size(){
            return top + 1;
        }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top Element: " << s.peek() << endl;

    s.pop();
    cout << "Stack size: " << s.size() << endl;

    return 0;
}
