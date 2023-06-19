
lista = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
for i in range(0, 10):
    lista[i] = int(input(f"Valor do indice {i} da lista: "))

for i in range(0, 10):
    if lista[i] % 3 == 0:
        print(f"Multiplo de 3: {lista[i]}")
