n = int(input())
point = []
s_point = []
rectangle = [[False]*2001 for _ in range(2001)]

for _ in range(n):
    x, y = map(int, input().split())
    point.append([x+1000, y+1000])

xs, xt = map(int, input().split())
ys, yt = map(int, input().split())
xs += 1000
xt += 1000
ys += 1000
yt += 1000
s_point = [[xs, ys], [xs, yt], [xt, yt], [xt, ys]]
for i in range(xs, xt+1):
    for j in range(ys, yt+1):
        rectangle[i][j] = True

ans = 0

for i in range(n):
    x, y = point[i]
    if rectangle[x][y]:
        ans += 1

print(ans)