#include <iostream>

using namespace std;

int n;
int groups[5000][30];
int m[5000];
int groups_info[5000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m[i];
        for (int j = 0; j < m[i]; j++) {
            cin >> groups[i][j];
        }
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m[i]; j++) {
            groups_info[i] |= (1 << groups[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int sub_i = i+1; sub_i < n; sub_i++) {
            if (!(groups_info[i] & groups_info[sub_i])) {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}