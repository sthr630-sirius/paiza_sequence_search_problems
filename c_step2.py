n = int(input())
a = list(map(int, input().split()))
for i in range(n):
    if a[i]%2 == 1:
        ans = i+1

print(ans)