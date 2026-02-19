#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int case1 = abs(b - a);
	int case2 = abs(a - x) + abs(b -y);
	int case3 = abs(a - y) + abs(b - x);
	

	if(case1 > case2){
		if(case2 > case3)
		cout << case3;
		else cout << case2;
    }
	else if(case2 > case3){
		if(case1 > case3)
		cout << case3;
		else cout << case1;
    }
	else if(case3 > case1){
		if(case1 > case2) cout << case2;
		else cout << case1;
    }

    return 0;
}