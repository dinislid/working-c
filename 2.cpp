#include <iostream>
using namespace std;

int main() {
    float L;
    cout << "Введите значение L: ";
    cin >> L;
    float I1 = 10;
    cout << "Введите значение I1: ";
    cin >> I1;
    float I2;
    cout << "Введите значение I2: ";
    cin >> I2;
    float R;
    cout << "Введите значение R: ";
    cin >> R;
    float F = (L * I1 * I2) / R;
    cout << " F = " << F << endl;

    return 0;
}