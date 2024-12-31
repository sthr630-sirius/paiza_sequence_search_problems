n = int(input())
score = []
for _ in range(n):
    name, s = input().split()
    s = int(s)
    score.append([name, s])

lower, upper = map(int, input().split())

for name, s in score:
    if lower <= s <= upper:
        print(name)