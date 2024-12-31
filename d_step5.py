n = int(input())
point = []
ans = 0
for i in range(n):
    x, y = map(int, input().split())
    point.append([x, y])

k = int(input())

for i in range(n):
    dist = abs(point[i][0]-point[n-1][0])+abs(point[i][1]-point[n-1][1])
    if dist <= k:
        ans += 1

print(ans)