n = int(input())
a = list(map(int, input().split()))
k = int(input())

ans = 0

for i in range(n):
    if a[i] == k:
        print(i+1)

print(ans)