#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;
    
    // Input the expression
    cin >> A >> S >> B;
    
    // Perform the operation based on the operator S
    if (S == '+') {
        cout << A + B << endl;
    }
    else if (S == '-') {
        cout << A - B << endl;
    }
    else if (S == '*') {
        cout << A * B << endl;
    }
    else if (S == '/') {
        cout << A / B << endl;
    }
    
    return 0;
}
