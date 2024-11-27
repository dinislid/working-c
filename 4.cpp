#include <iostream>
using namespace std;

float calc(float L,float I1,float I2,float R);

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
    cout << calc(L,I1,I2,R) << endl;

    return 0;
}


float calc(float L,float I1,float I2,float R){
    return (L * I1 * I2) / R;
}