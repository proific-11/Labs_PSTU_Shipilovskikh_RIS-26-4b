#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter m and n: ";
    cin >> m >> n;

    int m0 = m, n0 = n;

    cout << "--m - ++n = " << (--m - ++n) << endl;

    m = m0;
    n = n0;

    int result = m * n;
    cout << "m*n < n++ = " << (result < n++) << endl;

    m = m0;
    n = n0;

    cout << "n-- > m++ = " << (n-- > m++) << endl;

    return 0;
}