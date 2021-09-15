import itertools
import sys

n = int(sys.stdin.readline())
perms = list(itertools.permutations([i for i in range(1, n + 1)]))

print("\n".join(" ".join(str(e) for e in perm) for perm in perms))

