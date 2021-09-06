import itertools
import math
import sys

n = int(sys.stdin.readline())

for _ in range(n):
    nums = list(map(int, sys.stdin.readline().split()))
    combs = list(itertools.combinations(nums[1:], 2))
    total = 0
    
    for comb in combs:
        total += math.gcd(comb[0], comb[1])
    
    print(total)
