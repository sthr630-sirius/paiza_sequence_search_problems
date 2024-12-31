n = int(input())
a = list(map(int, input().split()))
k = int(input())-1
a.sort(reverse=True)
print(a[k])