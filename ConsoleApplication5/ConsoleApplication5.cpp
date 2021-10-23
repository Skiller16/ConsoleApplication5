#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int min, max;
    float x, h, y;
    cout << "enter(min,max) and h" << endl;
    cin >> min >> max >> h;
    x = min;
    cout << "\tx" << "\tY(x)" << endl;
    while (x <= max + h / 2)
    {
        y = (pow(x, 1 / 2.)) + (cos(x)) - 3;
        cout << setw(10) << x << setw(10) << setprecision(3) << y << endl;
        x += h;
    }
    cout << "Do...while" << endl;
    x = min;
    cout << "\tx" << "\tY(x)" << endl;
    do
    {
        y = (pow(x, 1 / 2.)) + (cos(x)) - 3;
        cout << setw(10) << x << setw(10) << setprecision(3) << y << endl;
        x += h;
    } while (x <= max + h / 2);
}
