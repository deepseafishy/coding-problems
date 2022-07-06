def check(M, N, x, y):
    while x <= M*N:
        if (x - y) % N == 0:
            return x
        x += M
    return -1

def main():
    T = int(input())
    for i in range(T):
        M, N, x, y = map(int, input().split())
        print(check(M, N, x, y))

if __name__=="__main__":
    main()
