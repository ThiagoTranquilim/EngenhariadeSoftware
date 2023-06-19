import math
a = float(input("Valor de A: "))
b = float(input("Valor de B: "))
c = float(input("Valor de C: "))

delta = (b ** 2) - 4*a*c

print(f"\n{delta}\n")

valor1 = (-b + math.sqrt(delta)) / (2 * a)
valor2 = (-b - math.sqrt(delta)) / (2 * a)

if (delta == 0):
    print(f"Valor da equação é: {valor1}")
else:
    if(delta < 0):
        print(f"Valor de equação é inexistente")
    else:
        print(f"O valor da primeira é: {valor1}")
        print(f"O valor da segunda é: {valor2}")
