#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

bool isValidParenthesis()
{
    stack<char> parenthesesStack;
    for (auto c : str) {
        if (c == '(') {
            parenthesesStack.push(c);
        } else {
            if (parenthesesStack.empty()) return false;
            parenthesesStack.pop();
        }
    }
    if (!parenthesesStack.empty()) return false;
    return true;
}

int main() {
    cin >> str;

    // Please write your code here.
    string output = isValidParenthesis() ?
                    "Yes" : "No";
    cout << output << endl;

    return 0;
}
