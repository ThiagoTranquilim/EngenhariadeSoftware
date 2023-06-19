n = int(input("Número de habitantes: "))

somaSalario = somaFilhos = a100 = 0

salario = float(input("Salário: "))
nmrFilhos = int(input("Número de filhos: "))
maiorSalario = salario

for i in range(2, n + 1):
    salario = float(input("Salário: "))
    nmrFilhos = int(input("Número de filhos: "))
    somaSalario += salario
    somaFilhos += nmrFilhos

    if salario > maiorSalario:
        maiorSalario = salario
    else:
        if salario <= 100:
            a100 += 1

mediaSalario = somaSalario / n
mediaFilhos = somaFilhos / n
o = a100 * 100 / n

print(f"Media do salário: {mediaSalario}")
print(f"Media dos filhos: {mediaFilhos}")
print(f"Maior salário: {maiorSalario}")
print(f"Percentual de pessoas com sálario ate 100.00: {o}")
