import sys

maximum, minimum = -1000000000, 1000000000
n = int(sys.stdin.readline())
nums = list(map(int, sys.stdin.readline().split()))
a, s, m, d = list(map(int, sys.stdin.readline().split()))


def calculate(num, idx, add, sub, mul, div):
    global n, nums, maximum, minimum

    if idx == n:
        maximum = max(maximum, num)
        minimum = min(minimum, num)
    else:
        if add:
            calculate(num + nums[idx], idx + 1, add - 1, sub, mul, div)
        if sub:
            calculate(num - nums[idx], idx + 1, add, sub - 1, mul, div)
        if mul:
            calculate(num * nums[idx], idx + 1, add, sub, mul - 1, div)
        if div:
            calculate(int(num / nums[idx]), idx + 1, add, sub, mul, div - 1)


calculate(nums[0], 1, a, s, m, d)
print(maximum)
print(minimum)

