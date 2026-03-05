#include <iostream>
#include <unordered_map>

using namespace std;

int n, k;
int arr[1000];
unordered_map<int, int> freq;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        int first_choice = k - arr[i];
        freq.clear();
        for (int sub_i = i + 1; sub_i < n; sub_i++) {
            int target = first_choice - arr[sub_i];
            if (freq.find(target) != freq.end()) {
                count += freq[target];
            }
            freq[arr[sub_i]]++;
        }
    }
    cout << count << endl;

    return 0;
}
