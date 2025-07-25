import math
n=int(input("Nhập vào số n: "))
print(f"{n} fibonacci đầu tiên là: ",end=" ")
if n==1:
    print(0)
elif n==2:
    print(0,1)
else:
    print(0,1,end=" ")
    a=0
    b=1
    n-=2
    while n>0:
        c=a+b
        a=b
        b=c
        print(c,end=" ")
        n-=1
        