#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    if(arr[0] * arr[1] >= arr[n - 3] * arr[n - 2]){
        cout << arr[0] * arr[1] * arr[n - 1];
    }else {
        cout << arr[n - 1] * arr[n - 2] * arr[n - 3];
    }
    // Please write your code here.

    return 0;
}