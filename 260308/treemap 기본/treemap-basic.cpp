#include <iostream>
#include <string>
#include <map>

using namespace std;

int n;
string cmd[100000];
int k[100000];
int v[100000];
map<int, int> m;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cmd[i];
        if (cmd[i] == "add") {
            cin >> k[i] >> v[i];
        } else if (cmd[i] == "remove" || cmd[i] == "find") {
            cin >> k[i];
        }
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (cmd[i] == "add") {
            m[k[i]] = v[i];
        } else if (cmd[i] == "remove") {
            m.erase(k[i]);
        } else if (cmd[i] == "find") {
            if (m.find(k[i]) != m.end()) {
                cout << m[k[i]] << endl;
            } else {
                cout << "None" << endl;
            }
        } else if (cmd[i] == "print_list") {
            if (!m.empty()) {
                map<int, int>::iterator it;
                for (it = m.begin(); it != m.end(); it++) {
                    cout << (it->second) << " ";
                }
                cout << endl;
            } else {
                cout << "None" << endl;
            }
        }
    }

    return 0;
}
