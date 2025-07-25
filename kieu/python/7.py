n = int(input()
k = 0
while n > 0:
    z = n % 10
    k = k * 10 + z
    n = n // 10
print(k)
