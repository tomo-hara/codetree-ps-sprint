#include <iostream>
#include <unordered_map>

using namespace std;


unordered_map<int, int> um;


const int MAX_N = 100000;

int n, m;
int arr[MAX_N];
int nums[MAX_N];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        um[arr[i]]++;
    }

    for (int i = 0; i < m; i++) {
        cout << um[nums[i]] << " ";
    }


    return 0;
}
