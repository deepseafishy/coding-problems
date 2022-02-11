#include <iostream>
#define ll long long

using namespace std;

int num;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    while (cin >> num){
        int cnt = 1;
        ll K = 1LL;

        while (1) {
            if (K % num == 0){
                cout << cnt << '\n';
                break;
            }
            
            K %= num;
            K = (K*10) + 1;
            cnt += 1;
        }
    }

    return 0;
}    
