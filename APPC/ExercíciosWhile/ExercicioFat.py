import math

x = float(input("Digite o valor de x: "))
s = 0

for i in range(20):
    if i % 2 == 0:
        s += x**(2*i) / math.factorial(2*i+1)
    else:
        s -= x**(2*i) / math.factorial(2*i+1)

print("O valor do somatório é:", s)
