#include <iostream>
#include <unordered_map>

using namespace std;

int n;
int x[100000], y[100000];
unordered_map<int, int> points;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (points.find(x[i]) == points.end() || points[x[i]] > y[i]) {
            points[x[i]] = y[i];
        }
    }

    int sum = 0;
    for (auto point : points) {
        sum += point.second;
    }
    cout << sum << endl;

    return 0;
}