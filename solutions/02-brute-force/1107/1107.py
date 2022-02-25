import itertools
import sys


N = list(input())
digits = [int(i) for i in  N]
N = int("".join(n for n in N))
M = int(input())
broken = list()
if M > 0:
    broken = list(map(int, sys.stdin.readline().split()))
nums = [i for i in range(10) if i not in broken]

pressed = [list() for _ in range(len(digits))]
for i, digit in enumerate(digits):
    if digit in nums:
        pressed[i].append(digit)

    up, down = (digit + 1) % 10, (digit - 1) % 10
    while up not in nums:
        if up == 9:
            up = -1
        up += 1

    while down not in nums:
        if down == 0:
            down = 10
        down -= 1

    pressed[i].append(up)
    pressed[i].append(down)
print(pressed)

candidates = list()
for digits in list(itertools.product(*pressed)):
    candidates.append(int("".join(str(i) for i in digits)))
print(candidates)

answer = 500000
for candidate in candidates:
    current_answer = abs(N - candidate)
    if current_answer < answer:
        answer = current_answer

answer += len(digits)
if answer < abs(N - 100):
    print(answer)
else:
    print(abs(N - 100))

