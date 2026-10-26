#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a = exp(-1.0);
    double sum = a;

    for (int n = 1; n < 7; n++) {
        double k = (n + 1.0) / n;
        a *= k * k * exp(sqrt(n) - sqrt(n + 1.0));
        sum += a;
    }

    cout << fixed << setprecision(8);
    cout << "сумма = " << sum << endl;

    return 0;
}
