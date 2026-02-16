#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;

    list<char> editor(s.begin(), s.end());
    list<char>::iterator it = editor.end();

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        switch (command) {
            case 'L':
                if (it != editor.begin()) it--;
                break;
            case 'R':
                if (it != editor.begin()) it++;
                break;
            case 'D':
                if (it != editor.end()) it = editor.erase(it);
                break;
            case 'P':
                char c;
                cin >> c;
                editor.insert(it, c);
                break;
        }
    }

    for (char c : editor) cout << c;
    cout << endl;

    return 0;
}
