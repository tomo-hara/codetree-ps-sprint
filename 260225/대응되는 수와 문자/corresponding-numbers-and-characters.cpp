#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int n, m;
string words[100000];
string queries[100000];

unordered_map<string, int> string_to_integer;
unordered_map<int, string> integer_to_string;

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> words[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> queries[i];
    }

    // Please write your code here.
    for (int i = 1; i <= n; i++) {
        string_to_integer[words[i]] = i;
        integer_to_string[i] = words[i];
    }

    for (int i = 0; i < m; i++) {
        auto first_char = queries[i].at(0);
        if (first_char >= '0' && first_char <= '9') {
            cout << integer_to_string[stoi(queries[i])] << endl;
        } else {
            cout << string_to_integer[queries[i]] << endl;
        }
    }


    return 0;
}
