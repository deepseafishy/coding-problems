import itertools
import sys

n, s = map(int, sys.stdin.readline().split())
nums = list(map(int, sys.stdin.readline().split()))

answer = 0
for i in range(1, n + 1):
    combs = itertools.combinations(nums, i)

    for comb in list(combs):
        if sum(comb) == s:
            answer += 1

print(answer)

