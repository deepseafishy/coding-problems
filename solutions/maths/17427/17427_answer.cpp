#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    long long total = 0;
    for (int i = 1; i <= num; ++i)
        total += ((num / i) * i);

    cout << total << endl;

    return 0;
}
