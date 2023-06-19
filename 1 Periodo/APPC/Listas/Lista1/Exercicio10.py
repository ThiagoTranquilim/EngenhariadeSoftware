lista = []
sl = 0
mp = 1


for i in range(0, 10):
    a = int(input(f"Número no indice {i} da lista: "))
    lista.append(a)
    sl += a
    mp *= a

print(lista)
print(sl)
print(mp)
