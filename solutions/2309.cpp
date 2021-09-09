#include <cstdio>

using namespace std;

int main() {
    const int N = 9;
    int height[N], sum = 0, i, j, min = 0, nextMin = 100;
    bool passed = false;

    for (int k = 0; k < N; k++) {
        scanf("%d", &height[k]);
        sum += height[k];
    }

    for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (height[i] + height[j] == sum - 100) {
                passed = true;
                break;
            }
        }
        if (passed)
            break;
    }

    for (int l = 0; l < 7; l++) {
        for (int k = 0; k < N; k++) {
            if (k == i || k == j)
                continue;
            if (height[k] > min && height[k] < nextMin)
                nextMin = height[k];
        }
        printf("%d\n", nextMin);
        min = nextMin;
        nextMin = 100;
    }

    return 0;
}
