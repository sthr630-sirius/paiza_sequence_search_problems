n = int(input())
score = []
for _ in range(n):
    name, s = input().split()
    s = int(s)
    score.append([name, s])

border = int(input())

for name, s in score:
    if s >= border:
        print(name)