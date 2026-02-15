#include <iostream>
#include <string>
#include <list>
#include <map>

using namespace std;

int N;
string command[10000];
int A[10000];

enum CommandType {
    CMD_PUSH_FRONT,
    CMD_PUSH_BACK,
    CMD_POP_FRONT,
    CMD_POP_BACK,
    CMD_SIZE,
    CMD_EMPTY,
    CMD_FRONT,
    CMD_BACK,
    //CMD_UNKNOWN // 매핑되지 않은 명령어 처리용
};

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
    }

    // Please write your code here.
    list<int> numbers;
    map<string, CommandType> cmd_map;
    CommandType cmd_type;

    cmd_map["push_front"] = CMD_PUSH_FRONT;
    cmd_map["push_back"]  = CMD_PUSH_BACK;
    cmd_map["pop_front"]  = CMD_POP_FRONT;
    cmd_map["pop_back"]   = CMD_POP_BACK;
    cmd_map["size"]       = CMD_SIZE;
    cmd_map["empty"]      = CMD_EMPTY;
    cmd_map["front"]      = CMD_FRONT;
    cmd_map["back"]       = CMD_BACK;

    for (int i = 0; i < N; i++) {
        // if (cmd_map.find(command[i]) != cmd_map.end()) {
            cmd_type = cmd_map[command[i]];
        // }
        
        switch (cmd_type) {
            case CMD_PUSH_FRONT:
                numbers.push_front(A[i]);
                break;
            case CMD_PUSH_BACK:
                numbers.push_back(A[i]);
                break;
            case CMD_POP_FRONT:
                cout << numbers.front() << endl;
                numbers.pop_front();
                break;
            case CMD_POP_BACK:
                cout << numbers.back() << endl;
                numbers.pop_back();
                break;

            case CMD_SIZE:
                cout << numbers.size() << endl;
                break;
            case CMD_EMPTY:
                cout << numbers.empty() << endl;
                break;
            case CMD_FRONT:
                cout << numbers.front() << endl;
                break;
            case CMD_BACK:
                cout << numbers.back() << endl;
                break;
            default:
                break;
        }
    }

    return 0;
}
