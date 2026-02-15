#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Please write your code here.
    string strCmd;
    int N, A, k;
    vector<int> nums;

    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> strCmd;
        if (strCmd == "push_back") {
            cin >> A;
            nums.push_back(A);
        } else if (strCmd == "pop_back") {
            nums.pop_back();
        } else if (strCmd == "size") {
            cout << nums.size() << endl;
        } else { // if (strCmd == "get")
            cin >> k;
            cout << nums.at(k - 1) << endl;
        }
    }
    
    return 0;
}