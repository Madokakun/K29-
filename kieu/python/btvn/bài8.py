import math
def solve(k):
    s=10**(k-1)
    e=10**k
    res=[]
    for n in range(s,e):
        s=sum(int(d)**k for d in str(n))
        if s==n:
            res.append(n)
    return res
n=int(input("Nhập số:"))
res=solve(n)
print("Các số thỏa măn là: ", end=" ")
for i in res:
    print(i,end=" ")