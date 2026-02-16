#include <iostream>

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
        } else if (command[i] == "push") {
        }
    }

    // Please write your code here.

    return 0;
}
