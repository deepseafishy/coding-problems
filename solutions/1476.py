import sys

e, s, m = map(int, sys.stdin.readline().split())
ce, cs, cm = 1, 1, 1
count = 1

while (True):
    if e == ce and s == cs and m == cm:
        print(count)
        break
    else:
        ce += 1
        cs += 1
        cm += 1
        count += 1
        
        if ce == 16:
            ce = 1
        if cs == 29:
            cs = 1
        if cm == 20:
            cm = 1

