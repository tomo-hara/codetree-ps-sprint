#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command[10000];
int A[10000];

// const char gp_cmd_table[] = {
//     "push_front", "push_back", "pop_front", "pop_back",
//     "size", "empty", "front", "back"
// };

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
    }

    // Please write your code here.
    list<int> numbers;
    for (int i = 0; i < N; i++) {
        if ("push_front" == command[i]) {
            numbers.push_front(A[i]);
        } else if ("push_back" == command[i]) {
            numbers.push_back(A[i]);
        } else if ("pop_front" == command[i]) {
            cout << numbers.front() << endl;
            numbers.pop_front();
        } else if ("pop_back" == command[i]) {
            cout << numbers.back() << endl;
            numbers.pop_back();
        }

        else if ("size" == command[i]) {
            cout << numbers.size() << endl;
        } else if ("empty" == command[i]) { // cf.boolalpha / noboolalpha
            cout << numbers.empty() << endl;
        } else if ("front" == command[i]) {
            cout << numbers.front() << endl;
        } else { //if ("back" == command[i])
            cout << numbers.back() << endl;
        }
    }

    return 0;
}
