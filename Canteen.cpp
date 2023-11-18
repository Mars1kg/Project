#include <iostream>
using namespace std;
int main () {
    int a = 10;
    int b = 15;
    cout << a << " " << b << endl;
    int n;
    cin >> n;
    int Amult = n*a;
    int Bmult = n*b;
    int first = Bmult / 100;
    if (Bmult>=100) {
        cout << Amult + first << " som and  " ;
        cout << Bmult % 100 << " tyiyn";
    }
    if (Bmult < 100)
    cout << Amult << " som and  " << Bmult << " tyiyn ";
      return 0;      
}
