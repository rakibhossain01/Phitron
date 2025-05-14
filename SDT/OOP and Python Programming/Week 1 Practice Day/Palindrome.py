s = str(input())
ss = str(int(s[::-1])) 

if s == ss:
    print(s,"\nYES")
else:
    print(ss,"\nNO")