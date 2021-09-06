#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    
    return gcd(b % a, a);
}


int main() {
    int t, n;
    long long sum;
    int nums[100];
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        sum = 0;
        
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> nums[j];
        }
        
        for (int j = 0; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (nums[j] > nums[k]) {
                    sum += gcd(nums[k], nums[j]);
                } else {
                    sum += gcd(nums[j], nums[k]);
                }
            }
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
