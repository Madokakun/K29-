import math
def gcd(a,b):
    while b:
        a,b=b,a%b
    return a
a,b,c=map(int,input("Nhập vào ba số a,b,c: ").split())
print(f"Ước chung lơn nhất của {a}, {b} và {c} là: {gcd(a,gcd(b,c))}")