#include <iostream>
using namespace std;

int main() {
    float a = 1000.0f, b = 0.0001f;

    float c = (a - b) * (a - b) * (a - b);
    float d = a * a * a - 3 * a * a * b;
    float e = b * b * b - 3 * a * b * b;

    cout << "float: " << (c - d) / e << endl;

    double a1 = 1000.0, b1 = 0.0001;

    double c1 = (a1 - b1) * (a1 - b1) * (a1 - b1);
    double d1 = a1 * a1 * a1 - 3 * a1 * a1 * b1;
    double e1 = b1 * b1 * b1 - 3 * a1 * b1 * b1;

    cout << "double: " << (c1 - d1) / e1 << endl;

    return 0;
}