#include <iostream>

using namespace std;

int main()
{
    double investment, yearlyProfit;

    cout << "Enter your investment & yearly profit serially: ";
    cin >> investment >> yearlyProfit;

    double roi = (yearlyProfit / investment) * 100;

    cout << "ROI is " << roi << "%" << endl;

    return 0;
}
