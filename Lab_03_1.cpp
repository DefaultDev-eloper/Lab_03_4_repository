// Lab_03_4.cpp
// < Євченко Костянтин >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 8
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x;
    double y;
    double R;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    if ((x >= 0 && (x*x + y*y) <= R*R) || 
        (x <= 0 && abs(x) <= abs(y) && abs(y) <= R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
    cin.get();
    return 0;
}