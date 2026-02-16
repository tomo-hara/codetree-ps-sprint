#include <iostream>
#include <stack>

using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
        }
    }

    // Please write your code here.
    stack<int> cmdStack;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cmdStack.push(value[i]);
        } else if (command[i] == "pop") {
            cout << cmdStack.top() << endl;
            cmdStack.pop();
        } else if (command[i] == "size") {
            cout << cmdStack.size() << endl;
        } else if (command[i] == "empty") {
            cout << cmdStack.empty() << endl;
        } else if (command[i] == "top") {
            cout << cmdStack.top() << endl;
        }
    }

    return 0;
}
