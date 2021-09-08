import sys

r = 1000000
check = [True for _ in range(r)]

for i in range(2, int(r ** 0.6)):
    if check[i]:
        for j in range(i * 2, r, i): 
            if check[j]:
                check[j] = False

while (True):
    n = int(sys.stdin.readline())

    if n == 0:
        break
    
    proven = False
    for i in range(3, r):
        if check[i]:
            if check[n - i]:
                print("%d = %d + %d" % (n , i , n - i))
                proven = True
                break
    
    if not proven:
        print("Goldbach's conjecture is wrong.")
