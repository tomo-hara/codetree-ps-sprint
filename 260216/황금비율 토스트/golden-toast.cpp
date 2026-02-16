#include <iostream>
#include <string>

using namespace std;

int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;

    string::iterator it = s.end();

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if (command == 'L') {
            if (it != s.begin()) it--;
        } else if (command == 'R') {
            if (it != s.end()) it++;
        } else if (command == 'D') {
            if (it != s.end()) it = s.erase(it);
        } else if (command == 'P') {
            char c;
            cin >> c;

            it = s.insert(it, c);
            it++;
        }
    }

    cout << s << endl;

    return 0;
}
