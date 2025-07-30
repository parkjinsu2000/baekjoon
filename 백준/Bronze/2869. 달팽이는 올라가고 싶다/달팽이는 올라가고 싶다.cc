#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, v;
    cin >> a >> b >> v;

    int day = (v - b) / (a - b);
    if ((v - b) % (a - b) != 0) day++; // 나누어 떨어지지 않으면 하루 추가

    cout << day << '\n';
}

