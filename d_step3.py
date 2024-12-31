n = int(input())
a = list(map(int, input().split()))
k = int(input())

a.sort()

for ai in a:
    if ai >= k:
        print(ai)
        break