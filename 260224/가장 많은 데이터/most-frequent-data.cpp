#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;


unordered_map<string, int> string_to_index;


int n;
string words[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        string_to_index[words[i]]++;
    }

    int freq = 0; // MIN
    for (auto it = string_to_index.begin();
              it != string_to_index.end();
              it++) {
        freq = max(freq, it->second);
    }
    cout << freq << endl;

    return 0;
}
