#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    int digits[20] = {};
    int count = 0;

    while(1){
        if(n < 2){
            digits[count++] = n;
            break;
        }

        digits[count++] = n % 2;
        n /= 2;
    }

    for(int i = count - 1; i >= 0; i--) cout << digits[i];

    return 0;
}