#include <string>

#include "stdio.h"
#include "stdlib.h"

using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    int M;
    scanf("%d", &M);

    bool broken[10] = {0,}; 
    for (int i = 0; i < M; ++i) {
        int temp;
        scanf("%d", &temp);
        broken[temp] = true;
    }

    int answer = abs(N - 100);
    for (int i = 0; i < 1000001; ++i) {
        bool valid = true;
        int num = i;
       
        if (num == 0 && broken[0])
            valid = false;

        while (num != 0) {
            int digit = num % 10;
            
            if (broken[digit]) {
                valid = false;
                break;
            }
            num /= 10;
        }

        if (valid) {
            int current = abs(i - N) + to_string(i).length();
            
            answer = current < answer ? current : answer;
        }
    }

    printf("%d\n", answer);

    return 0;
}
