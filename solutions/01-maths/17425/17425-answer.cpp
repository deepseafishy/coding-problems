#include <stdio.h> 

using namespace std;

const int MAX = 1000001;

int main() {
    long long g[MAX] = {0,};
    for (int i = 1; i < MAX; ++i) {
        for (int j = i; j < MAX; j += i)
            g[j] += i;
        g[i] += g[i - 1];
    }

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", g[n]);
    }

    return 0;
}
