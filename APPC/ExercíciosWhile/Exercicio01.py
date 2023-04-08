n = int(input("N deve ser maior ou igual a 10: "))

if n < 10:
    print("N digitado errado")

else:
    i = 1
    x = int(input(f"Valor {i}: "))
    menor = x
    maior = x

    i = i + 1
    while i <= n:
        x = int(input(f"Valor {i}: "))

        if x < menor:
            menor = x
        if x > maior:
            maior = x

        i = i + 1

    print(f"Maior = {maior}")
    print(f"Menor = {menor}")
