num = int(input())
total = 0

for i in range(1, num + 1):
    total += ((num // i) * i)

print(total)
