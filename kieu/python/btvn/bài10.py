import math
s=input("Nhập chuỗi: ")
s1=s[::-1]
print(f"chuỗi {s}","là palindrome" if s==s1 else "không là palindrome")