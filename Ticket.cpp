#include <iostream>
using namespace std;
int main () {
    int a;
    cin >> a;
    int first = a / 100000;
    int second = (a / 10000) %10;
    int third = (a / 1000) % 10;
    int four = (a / 100) % 10;
    int five = (a / 10) % 10;
    int six = a % 10;
    int A= first + second + third;
    int B= four + five + six;
    if (A==B) {
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}
