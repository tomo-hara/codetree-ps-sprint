#include <iostream>
#include <set>

using namespace std;

int n;
string command[100000];
int x[100000];
set<int> s;
string result;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> command[i];
        if (command[i] == "add" || command[i] == "remove" ||
            command[i] == "find" || command[i] == "lower_bound" ||
            command[i] == "upper_bound") {
            cin >> x[i];
        }
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (command[i] == "add") {
            s.insert(x[i]);
        } else if (command[i] == "remove") {
            s.erase(x[i]);
        } else if (command[i] == "find") {
            bool isFind = s.find(x[i]) != s.end();
            result = isFind ? "true" : "false";
            cout << result << endl;
        } else if (command[i] == "lower_bound") {
            auto it = s.lower_bound(x[i]);
            if (it != s.end())
                cout << *it << endl;
            else
                cout << "None" << endl;
        } else if (command[i] == "upper_bound") {
            set<int>::iterator it = s.upper_bound(x[i]);
            if (it != s.end())
                cout << *it << endl;
            else
                cout << "None" << endl;
        } else if (command[i] == "largest") {
            if (s.rbegin() != s.rend())
                cout << *s.rbegin() << endl;
            else
                cout << "None" << endl;
        } else if (command[i] == "smallest") {
            if (s.rbegin() != s.rend())
                cout << *s.begin() << endl;
            else
                cout << "None" << endl;
        }
    }

    return 0;
}
