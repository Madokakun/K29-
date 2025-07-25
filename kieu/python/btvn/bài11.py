import math
n=int(input("Nhập vào số n: "))
a,b=1,2
t=0
while a<=n:
    if a%2==0:
        t+=a
    a,b=b,a+b
print(f"Tổng các số fibonnaci chẵn bé hơn hoặc bằng n là: {t}")