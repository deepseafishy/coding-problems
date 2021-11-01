import sys


ans = -1
n = -1
therapy = list()


def solve(day, income):
    global n
    global therapy
    global ans

    if day < n: 
        if therapy[day][0] + day <= n:
            solve(day + therapy[day][0], income + therapy[day][1])
        solve(day + 1, income)
    else:
        ans = max(income, ans)


def main():
    global n
    global therapy
    global ans
    
    n = int(sys.stdin.readline())
    therapy = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

    solve(0, 0)
    print(ans)


if __name__ == "__main__":
    main()

