#include <iostream>

using namespace std;

int main() {
    int n, temp, max = -1, min = 1000000;
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if (temp < min)
            min = temp;
        if (max < temp)
            max = temp;
    }
    
    cout << min * max << endl;
    
    return 0;
}
