#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num, even = 0, odd = 0;

    for (int i = 0; i < N; ++i) {
        cin >> num;
        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Odds: " << odd << endl;
    cout << "Evens: " << even << endl;

    return 0;
}
