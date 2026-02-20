#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;
string command[10000];
int A[10000];


queue<int> q;

void ProcessCmd(string cmd[], int idx)
{
    if (cmd[idx] == "push") {
        q.push(A[idx]);
    } else if (cmd[idx] == "pop") {
        cout << q.front() << endl;
        q.pop();
    } else if (cmd[idx] == "size") {
        cout << q.size() << endl;
    } else if (cmd[idx] == "empty") {
        cout << q.empty() << endl;
    } else if (cmd[idx] == "front") {
        cout << q.front() << endl;
    }
}


int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> A[i];
        }
    }

    // Please write your code here.
    for (int i = 0; i < N; i++) {
        ProcessCmd(command, i);
    }

    return 0;
}