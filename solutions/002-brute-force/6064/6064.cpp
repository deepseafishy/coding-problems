#include <iostream>

int T, M, N, x, y;

int check() {
    int limit = M*N;

    while (x <= limit) {
        if ((x - y) % N == 0)
            return x;
        x += M;
    }

    return -1;
}

int main() {
    scanf("%d", &T);

    for (int i = 0; i < T; ++i) {
        scanf("%d %d %d %d", &M, &N, &x, &y);
        printf("%d\n", check());
    }

    return 0;
}
