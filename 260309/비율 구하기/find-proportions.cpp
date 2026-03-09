#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int n;
string words[10000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // Please write your code here.
    map<string, int> freq;
    for (int i = 0; i < n; i++) {
        if (freq.find(words[i]) != freq.end())
            freq[words[i]]++;
        else 
            freq[words[i]] = 1;
    }
    
    std::cout << std::fixed;
    std::cout.precision(4);
    for (auto it = freq.begin(); it != freq.end(); it++) {
        cout << it->first << " " << ((double)it->second * 100 / n) << endl;
    }

    return 0;
}
