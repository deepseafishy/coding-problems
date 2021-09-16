import itertools
import sys


def check(arr):
    global n
    total = 0

    for i in range(n - 1):
        total += abs(arr[i] - arr[i + 1])

    return total


n = int(sys.stdin.readline())
nums = list(map(int, sys.stdin.readline().split()))
perms = list(itertools.permutations(nums))

answer = 0
for perm in perms:
    answer = max(answer, check(perm))

print(answer)

