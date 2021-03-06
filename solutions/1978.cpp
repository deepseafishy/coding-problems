#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n == 1)
        return false;
    if ((n == 2) || (n == 3))
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n, temp, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (is_prime(temp))
            count++;
    }
    cout << count;

    return 0;
}
