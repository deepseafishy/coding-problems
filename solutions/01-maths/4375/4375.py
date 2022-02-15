import sys


nums = list()

while True:
    string = sys.stdin.readline()
    if len(string) == 0:
        break

    nums.append(int(string))

checked = 0
answers = [0 for _ in range(len(nums))]
length, multiple = 1, 1

while True:
    for i, num in enumerate(nums):
        if answers[i] == 0 and multiple % num == 0:
            answers[i] = length
    
    if all(answers):
        break

    length += 1
    multiple = multiple*10 + 1

print("\n".join(str(e) for e in answers))
