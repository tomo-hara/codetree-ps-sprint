#include <iostream>
#include <unordered_map>

using namespace std;

int n, k;
int arr[100000];

unordered_map<int, int> freq;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int count = 0;
    for (int i = 0; i < n; i++) {
        int target = k - arr[i];
        
        if (freq.find(target) != freq.end()) {
            count += freq[target];
        }

        freq[arr[i]]++;
    }
    cout << count << endl;

    return 0;
}
