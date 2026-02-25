#include <iostream>
#include <unordered_map>

using namespace std;

int n, k;
int arr[100000];

unordered_map<int, int> num_to_index;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int sub_i = i + 1; sub_i < n; sub_i++) {
            if (arr[i] + arr[sub_i] == k) count++;
        }
    }
    cout << count << endl;

    return 0;
}
