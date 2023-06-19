lista = []
listaR = []
na = 0

for i in range(0, 20):
    if i % 2 == 0:
        a = float(input("Digite o valor da prova 1: "))
        lista.append(a)
    else:
        a = float(input("Digite o valor da prova 2: "))
        lista.append(a)
        listaR.append((lista[i - 1] + lista[i]) / 2)

        if ((lista[i - 1] + lista[i]) / 2) >= 7:
            na += 1

print(f"Números de alunos com média maior que 7: {na}")
