#include <iostream>

using namespace std;

int main()
{
    unsigned long long int a, b, c, d;

    cin >> a >> b >> c >> d;

    unsigned long long int result = (a * b * c * d) % 100;

    if (result < 10) {
        cout << "0" << result << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
