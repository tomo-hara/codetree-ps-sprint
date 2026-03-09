#include <iostream>
#include <string>
#include <map>

using namespace std;

int n;
string words[100000];
map<string, int> m;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        m[words[i]]++;
    }

    for (auto it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second << endl;

    return 0;
}
