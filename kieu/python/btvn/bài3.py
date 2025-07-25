import math
n=int(input("Nhập vào số : "))
t=0
for i in range(1,math.isqrt(n)+1):
    if n%i==0:
        t+=i
        if i!=n//i:
            t+=n//i
t-=n
print(f"{n} là số hoàn hảo" if t==n else f"{n} không là số hoàn hảo")