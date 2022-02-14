import sys


n = int(input())
arr = [list(sys.stdin.readline()) for _ in range(n)]
answer = 0


def check_row(idx):
    global n, arr, answer
    current = arr[idx][0]
    current_max = 1

    for col in range(1, n):
        if current == arr[idx][col]:
            current_max += 1
        else:
            answer = max(answer, current_max)
            current = arr[idx][col]
            current_max = 1

    answer = max(answer, current_max)


def check_col(idx):
    global n, arr, answer
    current = arr[0][idx]
    current_max = 1

    for row in range(1, n):
        if current == arr[row][idx]:
            current_max += 1
        else:
            answer = max(answer, current_max)
            current = arr[row][idx]
            current_max = 1

    answer = max(answer, current_max)


for i in range(n):
    check_row(i)
    check_col(i)

for row in range(n):
    for col in range(n - 1):
        arr[row][col], arr[row][col + 1] = arr[row][col + 1], arr[row][col]
        check_row(row)
        check_col(col)
        check_col(col + 1)
        arr[row][col], arr[row][col + 1] = arr[row][col + 1], arr[row][col]

for row in range(n - 1):
    for col in range(n):
        arr[row][col], arr[row + 1][col] = arr[row + 1][col], arr[row][col]
        check_row(row)
        check_row(row + 1)
        check_col(col)
        arr[row][col], arr[row + 1][col] = arr[row + 1][col], arr[row][col]

print(answer)
