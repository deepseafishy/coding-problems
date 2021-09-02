#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    
    return gcd(b % a, a);
}

int main() {
    int n, a, b;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << (a * b) / gcd(a, b) << endl;
    }
    
    return 0;
}
