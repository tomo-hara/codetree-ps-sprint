#include <iostream>

using namespace std;

int ElapsedDay(int mon, int date){
    int total_days = date;
    int end_of_month[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

    for(int i = 1; i < mon; i++){
        total_days += end_of_month[i];
    }
    return total_days;
}

int main() {
    int m1, m2, d1, d2;
    string A;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int diff = ElapsedDay(m2, d2) - ElapsedDay(m1, d1);
    int count = 0;
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat" , "Sun"};
    
    count += diff % 7;

    
    cout << count;
    

    return 0;
}