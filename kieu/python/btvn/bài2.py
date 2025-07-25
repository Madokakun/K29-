import math
n=int(input("Nhập vào số n: "))
t=0
while n>0:
    t=t*10+n%10
    n//=10
print(f"số đảo ngược của {n} là: {t}")