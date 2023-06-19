n = int(input("Quantidade de repetições: "))

q = p = 0

for i in range(1, n + 1):
    n1 = int(input("Número: "))
    if n1 % 2 == 1:
        q = 1
    else:
        p += n1

print(f"A quantidade de número impar é: {q}")
print(f"A soma dos números pares é: {p}")
