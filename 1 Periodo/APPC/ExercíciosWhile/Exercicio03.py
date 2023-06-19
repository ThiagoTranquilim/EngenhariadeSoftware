a = 1
b = 1
s = 0
while a != 99 and b != 50:
    s = s + a / b
    a = a + 2
    b = b + 1
    print(f"S = {a}/{b}")
print(f"Valor: {s}")
