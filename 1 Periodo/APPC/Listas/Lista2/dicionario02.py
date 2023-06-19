dicAerea = {1: ['SP', 'Campinas', 2, ['Gramado', 'Paulínia']], 2: ['SP', 'Campinas', 0, [0]], 3: ['Campinas', 'SP', 1, ['Gramado']], 4: ['SP', 'Florianópolis', 1, ['Campinas']], 5: ['Florianópolis', 'SP', 1, ['Campinas']]}


def insereVoo():
    while True:
        while True:
            try:
                codVoo = int(input("Digite o código do voo: "))
                break
            except ValueError:
                print("Digite um valor inteiro")

        if codVoo in dicAerea.keys():
            print("Código já cadastrado")
        else:
            while True:
                try:
                    cidadeOrigem = input("Digite a cidade origem: ")
                    break
                except ValueError:
                    print("Digite um valor de string")
            while True:
                try:
                    cidadeDestino = input("Digite a cidade destino: ")
                    break
                except ValueError:
                    print("Digite um valor de string")
            while True:
                try:
                    numEscala = int(input("Digite o número de escalas: "))
                    break
                except ValueError:
                    print("Digite um valor inteiro")

            cidadeEscala = []
            if numEscala == 0:
                print("Sem cidade em escala")
                cidadeEscala.append(0)
            else:
                for i in range(numEscala):
                    while True:
                        try:
                            nomeCidadeEscala = input("Digite o nome da cidade na escala: ")
                            break
                        except ValueError:
                            print("Digite um valor de string")
                    cidadeEscala.append(nomeCidadeEscala)
            dicAerea[codVoo] = [cidadeOrigem, cidadeDestino, numEscala, cidadeEscala]

            while True:
                try:
                    verificacaoCadastroVoo = input("Deseja inserir mais voos? S/N ")
                    break
                except ValueError:
                    print("Digite S para sim e N para não")
            if verificacaoCadastroVoo.upper() == 'S':
                continue
            else:
                break


def alteraVoo():
    while True:
        try:
            codVooAlterar = int(input("Digite o código do voo a ser alterado: "))
            break
        except ValueError:
            print("Digite um valor inteiro")
    if codVooAlterar in dicAerea.keys():
        while True:
            try:
                cidadeOrigemAlterar = input("Digite a cidade origem a ser alterado: ")
                break
            except ValueError:
                print("Digite um valor string")
        while True:
            try:
                cidadeDestinoAlterar = input("Digite a cidade destino a ser alterado: ")
                break
            except ValueError:
                print("Digite um valor string")
        while True:
            try:
                numEscalaAlterar = int(input("Digite o número de escalas: "))
                break
            except ValueError:
                print("Digite um valor inteiro")

        cidadeEscala = []
        if numEscalaAlterar == 0:
            print("Sem cidade em escala")
            cidadeEscala.append(0)
        else:
            for i in range(numEscalaAlterar):
                while True:
                    try:
                        nomeCidadeEscalaAlterar = input("Digite o nome da cidade na escala: ")
                        break
                    except ValueError:
                        print("Digite um valor de string")
                cidadeEscala.append(nomeCidadeEscalaAlterar)
        dicAerea[codVooAlterar] = [cidadeOrigemAlterar, cidadeDestinoAlterar, numEscalaAlterar, cidadeEscala]
    else:
        print("Código para tentativa de alteração não cadastrado")


def excluiVoo():
    while True:
        try:
            codVooExcluir = int(input("Digite o código do voo a ser excluido: "))
            break
        except ValueError:
            print("Digite um número inteiro")

    if codVooExcluir in dicAerea.keys():
        dicAerea.pop(codVooExcluir)
    else:
        print("Código não cadastrado")


def qtdVooCidade():
    contBusca = 0
    while True:
        try:
            cidadeBusca = input("Digite a cidade que determinará quantos voos saem dessa cidade: ")
            break
        except ValueError:
            print("Digite um valor string")
    for codVooBusca, dadosVooBusca in dicAerea.items():
        if cidadeBusca == dicAerea[codVooBusca][0]:
            print(dicAerea[codVooBusca])
            contBusca += 1
    print(f"A quantidade de voos que saem da cidade {cidadeBusca} é {contBusca}")


def menorVoo():
    listaMenorEscala = []
    while True:
        try:
            cidadeOrigemBusca = input("Digite a cidade origem: ")
            break
        except ValueError:
            print("Digite um valor string")
    while True:
        try:
            cidadeDestinoBusca = input("Digite a cidade destino: ")
            break
        except ValueError:
            print("Digite um valor string")
    for codVooBusca, dadosVooBusca in dicAerea.items():
        if cidadeOrigemBusca == dicAerea[codVooBusca][0] and cidadeDestinoBusca == dicAerea[codVooBusca][1]:
            listaMenorEscala.append(dicAerea[codVooBusca][2])
    escalaMenor = min(listaMenorEscala)
    for codVooBusca, dadosVooBusca in dicAerea.items():
        if cidadeOrigemBusca == dicAerea[codVooBusca][0] and cidadeDestinoBusca == dicAerea[codVooBusca][1]:
            if escalaMenor == dicAerea[codVooBusca][2]:
                print(dicAerea[codVooBusca])


def vooDestino():
    listaVooDestino = []
    while True:
        try:
            cidadeDestino = input("Digite a cidade que determinará todos os voos que iram para essa cidade: ")
            break
        except ValueError:
            print("Digite um valor string") 
    for codVooBusca, dadosVooBusca in dicAerea.items():
        if cidadeDestino == dicAerea[codVooBusca][1]:
            listaVooDestino.append(dicAerea[codVooBusca])
    print(listaVooDestino)


def menu():
    print("1 - Inserir novos voos")
    print("2 - Alterar as informações sobre um determinado voo")
    print("3 - Apagar um voo")
    print("4 - Ver quantos voos saem de uma determinada cidade")
    print("5 - Dada a cidade origem e destino, determina o voo com menor número de escala")
    print("6 - Dada a cidade destino, determinar todos os voos que tem seu objetivo o mesmo destino")
    print("7 - Sair")
    while True:
        try:
            opcaoMenu = int(input("Digite a opção escolhida: "))
            break
        except ValueError:
            print("Digite um valor inteiro")
    return opcaoMenu


def main():
    while True:
        opcao = menu()
        if opcao == 1:
            insereVoo()
            print(dicAerea)
        elif opcao == 2:
            alteraVoo()
            print(dicAerea)
        elif opcao == 3:
            excluiVoo()
            print(dicAerea)
        elif opcao == 4:
            qtdVooCidade()
            print(dicAerea)
        elif opcao == 5:
            menorVoo()
            print(dicAerea)
        elif opcao == 6:
            vooDestino()
            print(dicAerea)
        elif opcao == 7:
            print("Sair")
            break
        else:
            print("Opcao incorreta")


main()
