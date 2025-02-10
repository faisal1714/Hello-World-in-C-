#include <bits/stdc++.h>
using namespace std;

int main() {
    double N;
    cin >> N;
    int integerpart = (int)N;
    double decimalpart = N - integerpart;
    if (decimalpart == 0) {
        cout << "int " << integerpart << endl;
    } else {
        cout << "float " << integerpart << " " << fixed << setprecision(3) << decimalpart << endl;
    }

    return 0;
}
