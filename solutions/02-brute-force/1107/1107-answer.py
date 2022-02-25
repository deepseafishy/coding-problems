import sys

N = int(input())
M = int(input())
broken = list()
if M > 0:
    broken = sys.stdin.readline().split()

answer = abs(N - 100)
for i in range(1000001):
    digits, valid = list(str(i)), True
    for digit in digits:
        if digit in broken:
            valid = False
            break
    
    if valid:
        answer = min(abs(i - N) + len(digits), answer)

print(answer)
