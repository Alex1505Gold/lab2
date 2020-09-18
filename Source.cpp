#include <iostream>
#include <cmath>
using namespace std;

long long  fact(int n) {
    long long f = 1;
    for (int i = 1; i <= n; ++i) {
        f *= i;
    }
    return f;
}

int main()
{
    //zada4a 1
    cout << "ASCII:" << endl;
    char a = 0;
    for (int i = 0; i <= 255; ++i) {
        cout << a << endl;
        a++;
    }
    //cout << fact(5) << endl;
    //zada4a 2
    cout << "vvedi symval" << endl;
    cin >> a;
    if ((a >= '0') && (a <= '9')) cout << "digit" << endl;
    else if (((a >= 'A') && (a <= 'Z')) || ((a >= 'a') && (a <= 'z'))) cout << "bykva" << endl;
    else cout << "UFO" << endl;
    //zada4a 3
    unsigned int x;
    cout << "vvedi x" << endl;
    cin >> x;
    double y = 0;
    int z = x % 4;
    //cout << z << endl;
    switch (z) {
    case 0: y = 0; break;
    case 1: y = 1 / x; break;
    case 2: y = 1; break;
    case 3: y = 0.1 * x; break;
    }
    cout << y << endl;
    // zada4a 4
    cout << "vvedi x" << endl;
    double x1;
    cin >> x1;
    int n;
    y = sin(x1);
    long double h;
    double u = 1.0;
    for (int i = -2; i >= -6; --i) {
        n = 0;
        h = 1.0 * x1;
        while (abs(h - y) >= 0.001 * u) {
            n++;
            h += pow(-1, n) * pow(x1, 2 * n + 1) / fact(2 * n + 1);
            cout << y << " " << h << endl;
        }
        u *= 0.1;
        cout << "dlya 10^" << i << " nado iteraciy " << n << endl;
        //cout << "dlya 10^ nado iteraciy "<< n <<endl;
    }

    return 0;
}