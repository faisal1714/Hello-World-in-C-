#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        if (b >= c)
            cout << c << "\n" << b << "\n" << a << endl;
        else
            cout << b << "\n" << c << "\n" << a << endl;
    } 
    else if (b >= a && b >= c) {
        if (a >= c)
            cout << c << "\n" << a << "\n" << b << endl;
        else
            cout << a << "\n" << c << "\n" << b << endl;
    } 
    else {
        if (a >= b)
            cout << b << "\n" << a << "\n" << c << endl;
        else
            cout << a << "\n" << b << " \n" << c << endl;
    }
    cout<<endl;
    cout<<a<<"\n"<<b<<"\n"<<c<<endl;

    return 0;
}
