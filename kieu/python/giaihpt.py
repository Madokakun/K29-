a1 = float(input())
b1 = float(input())
c1 = float(input())
a2 = float(input())
b2 = float(input())
c2 = float(input())

D = a1 * b2 - a2 * b1
Dx = c1 * b2 - c2 * b1
Dy = a1 * c2 - a2 * c1

if D != 0:
    x = Dx / D
    y = Dy / D
    print(x, y)
elif Dx == 0 and Dy == 0:
    print("Vô số nghiệm")
else:
    print("Vô nghiệm")
