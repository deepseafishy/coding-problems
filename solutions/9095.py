import sys

total = 0;


def count(num):
    global total
    
    if num == 0:
        total += 1
        return
    else:
        if num >= 1:
            count(num - 1)
        if num >= 2:
            count(num - 2)
        if num >= 3:
            count(num - 3)


def main():
    global total
    n = int(sys.stdin.readline())

    for _ in range(n):
        num = int(sys.stdin.readline())
        total = 0
        
        count(num)
        print(total)


if __name__=="__main__":
    main()
