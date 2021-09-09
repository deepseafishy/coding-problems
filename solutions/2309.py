import itertools
import sys

nums = []
for _ in range(9):
    nums += [int(sys.stdin.readline())]

nums.sort()
combs = itertools.combinations(nums, 2)
leftover = sum(nums) - 100

for comb in combs:
    if comb[0] + comb[1] == leftover:
        nums.remove(comb[0])
        nums.remove(comb[1])
        print('\n'.join(str(e) for e in nums))
        break;
