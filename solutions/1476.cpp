#include <cstdio>

using namespace std;

int main() {
    int e, s, m, ans[3] = {}, count = 0;

    scanf("%d %d %d", &e, &s, &m);

    while (e != ans[0] || s != ans[1] || m != ans[2]) {
        ans[0]++;
        if (ans[0] == 16)
            ans[0] = 1;

        ans[1]++;
        if (ans[1] == 29)
            ans[1] = 1;

        ans[2]++;
        if (ans[2] == 20)
            ans[2] = 1;

        count++;
    }

    printf("%d", count);

    return 0;
}
