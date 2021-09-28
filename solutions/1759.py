import itertools
import sys

l, c = map(int, sys.stdin.readline().split())
letters = sys.stdin.readline().split()
vowels = ['a', 'e', 'i', 'o', 'u']
combs = list(itertools.combinations(letters, l))

answer = []
for comb in combs:
    comb_vowels = [ch for ch in comb if ch in vowels]
    
    if 0 < len(comb_vowels) < l - 1:
        temp = list(comb)
        temp = sorted(temp) 
        answer.append("".join(e for e in temp))

answer.sort()
print("\n".join(e for e in answer))

