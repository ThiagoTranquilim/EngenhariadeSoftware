
listaIdade = [10, 12, 14, 13, 12, 14, 13, 12, 14, 13, 12, 15, 13, 14, 11, 12, 10, 13, 14, 14, 13, 12, 14, 12, 14, 13, 12, 14, 13, 12]
listaTamanho = [1.5, 1.55, 1.6, 1.7, 1.65, 1.75, 1.8, 1.75, 1.7, 1.5, 1.6, 1.7, 1.5, 1.55, 1.6, 1.7, 1.65, 1.75, 1.8, 1.75, 1.7, 1.5, 1.7, 1.65, 1.75, 1.8, 1.75, 1.7, 1.5, 1.5]

s = 0
q = 0

for i in range(0, 30):
    s += listaTamanho[i]

mediaTamanho = s / 30

for i in range(0, 30):
    if listaIdade[i] > 13 and listaTamanho[i] < mediaTamanho:
        q += 1

print(mediaTamanho)
print(q)
