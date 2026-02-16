#include <iostream>

using namespace std;

#define MAX_N 50

int a_Ten(int n, int a){
    int digits = 0; // a진수인 n이 10진수로 바뀐 값
    int arr[MAX_N] = {}; // 자릿수 마다의 숫자를 저장할 배열
    int num = n; // 받아온 n을 저장할 변수
    int index; // 자릿수를 저장할 변수

    // 배열에 자릿수 마다 숫자를 저장하고 자릿수도 구하는 과정
    for(int i = 0; i < MAX_N; i++){
        arr[i] = num % 10;
        num = num / 10;

        if(num  < 1){
            index = i;
            break;
        }
    }
    // 제일 낮은 자릿수부터 a진수를 10진수로 변환하는 과정
    for(int i = index; i >= 0; i--){
        digits = digits * a + arr[i];
    } 

    return digits; // 그렇게 구한 10진수 n을 반환
}

void Ten_b(int n, int b){
    int digits[MAX_N] = {};
    int count = 0;

    while(1){
        if(n < b){    
            digits[count++] = n;
            break;
        }
        digits[count++] = n % b;
        n /= b;
    } 

    for(int i = count - 1; i >= 0; i--) cout << digits[i];
}

int main() {
    int a, b, n;
    cin >> a >> b;
    cin >> n;

    Ten_b(a_Ten(n, a), b);

    return 0;
}