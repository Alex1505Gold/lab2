#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    //zada4a 1
    cout << "ASCII:" << endl;
    char a = 0;
    for (int i = 0; i <= 255; ++i) {
        cout << i << " - " << a << endl;
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
    long double j;
    double u = 1.0;
    for (int i = -2; i >= -6; --i) {
        n = 1;
        h = 1.0 * x1;
        j = -1.0 * pow(x1, 3) / 6.0;
        //cout <<"IT: "<< y << " " << h << " " << j << endl;
        while (abs(h - y) >= 0.001 * u) {
            n++;
            h += j;
            j = -1.0 * j * pow(x1, 2) / ((2.0 * n + 1.0) * 2.0 * n);
            cout << y << " " << h << endl;
            //if (n > 9) break;
        }
        u *= 0.1;
        cout << "dlya 10^" << i << " nado iteraciy " << n << endl;
        //cout << "dlya 10^ nado iteraciy "<< n <<endl;
    }

    return 0;
}