#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    
    return gcd(b % a, a);
}

int main() {
    int a, b, g;
    
    cin >> a >> b;
    
    g = gcd(a, b);
    cout << g << endl;
    cout << (a * b) / g;
    
    return 0;
}
