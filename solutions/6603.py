import itertools
import sys

repeated = False

nums = list(map(int, sys.stdin.readline().split()))
while nums[0] != 0:
    if repeated:
        print()
    else:
        repeated = True
    
    combs = list(itertools.combinations(nums[1:], 6))
    for comb in combs:
        print(" ".join(str(e) for e in comb))
    
    nums = list(map(int, sys.stdin.readline().split()))

