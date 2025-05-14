n = int(input())
a = []
b = input().split()
for x in b:
    a.append(int(x))

c = {}
for x in a:
    if x in c:
        c[x] += 1
    else:
        c[x] = 1

ans = 0
for x in c:
    if c[x] >= x:
        ans += c[x] - x
    else:
        ans += c[x]

print(ans)
