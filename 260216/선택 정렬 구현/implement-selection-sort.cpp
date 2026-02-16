#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i; j < n - 1; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        int tmp = arr[min];
        arr[min] = arr[i];
        arr[i] = tmp;
    }

    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
