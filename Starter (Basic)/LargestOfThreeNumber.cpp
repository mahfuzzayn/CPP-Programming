#include <iostream>

using namespace std;

int main ()
{
    int x, y, z;

    cin >> x >> y >> z;

    if (x > y) {
        if (x > z) {
            cout << "X is Greater than Y & Z";
        }
    } else if (y > x) {
        if (y > z) {
            cout << "Y is Greater than X & Z";
        }
    } else {
        cout << "Z is Greater than X & Z";
    }

    return 0;
}
