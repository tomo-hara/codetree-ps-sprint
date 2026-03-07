#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[500];
int max_sum;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                int isOverlapped = (arr[i] & arr[j]) |
                                   (arr[i] & arr[k]) |
                                   (arr[j] & arr[k]);
                if (!isOverlapped) {
                    max_sum = max(max_sum, (arr[i] | arr[j] | arr[k]));
                }
            }
        }
    }
    cout << max_sum << endl;

    return 0;
}