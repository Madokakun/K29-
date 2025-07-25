import math
n=int(input("Nhập vào số n: "))
m=abs(n)
if m==0:
    print(1)
    return 0
d=0
while m>0:
    d+=1
    m//=10
print(f" {n} có {d} chữ số")