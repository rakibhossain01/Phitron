s1 = input()
l = 0
r = 0
s2 = ""
s3 = []
count = 0

for i in s1:
    s2 += i
    if i == 'L':
        l += 1
    else:
        r += 1

    if l == r:
        s3.append(s2)
        count += 1
        s2 = ""

print(count)

for i in s3:
    print(i)
