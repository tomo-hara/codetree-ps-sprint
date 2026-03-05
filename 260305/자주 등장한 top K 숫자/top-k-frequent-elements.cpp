#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
int arr[100000];
unordered_map<int, int> freq;

bool compare(const pair<int, int> & a, const pair<int, int> & b)
{
    if (a.second == b.second) {
        return a.first > b.first;
    }
    return a.second > b.second;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
    }

    vector<pair<int, int>> num_to_freq(freq.begin(), freq.end());
    
    sort(num_to_freq.begin(), num_to_freq.end(), compare);

    for (int i = 0; i < k; i++) {
        cout << num_to_freq[i].first;
        if (i < k - 1) cout << " ";
    }

    return 0;
}
