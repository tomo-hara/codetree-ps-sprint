#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int n;
int arr[100000];
map<int, int> first_pos;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (first_pos.find(arr[i]) == first_pos.end()) {
            first_pos[arr[i]] = i + 1;
        }
    }

    map<int, int>::iterator it;
    for (it = first_pos.begin(); it != first_pos.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
