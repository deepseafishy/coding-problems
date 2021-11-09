import sys

n = int(sys.stdin.readline())
s = list()

for _ in range(n):
    arg = list(sys.stdin.readline().split())

    if arg[0] == "add":
        arg[1] = int(arg[1])
        if arg[1] not in s:
            s.append(arg[1])

    elif arg[0] == "remove":
        arg[1] = int(arg[1])
        if arg[1] in s:
            s.remove(arg[1])

    elif arg[0] == "check":
        arg[1] = int(arg[1])
        if arg[1] in s:
            print(1)
        else:
            print(0)

    elif arg[0] == "toggle":
        arg[1] = int(arg[1])
        if arg[1] in s:
            s.remove(arg[1])
        else:
            s.append(arg[1])
    
    elif arg[0] == "all":
        s = [i for i in range(1, 21)]
    
    elif arg[0] == "empty":
        s = []

