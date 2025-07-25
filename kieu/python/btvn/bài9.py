import math
s=input("Nhập chuỗi: ")
c={}
for i in s:
    if i in c:
        c[i]+=1
    else:
        c[i]=1
for i in sorted(c):
    print(f"{i}: {c[i]}")