#include <iostream>

using namespace std;

int t, n, ans;

void count(int num) {
    if (num == 0)
        ans++;
    else {
        if (num >= 1)
            count(num - 1);
        if (num >= 2)
            count(num - 2);
        if (num >= 3)
            count(num - 3);
    }
}

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        ans = 0;
        count(n);
        cout << ans << endl;
    }

    return 0;
}
