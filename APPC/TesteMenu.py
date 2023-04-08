import time


def menu():
    print("--------------------")
    print("1 - Inserir Amostra\n")
    print("2 - Alterar Amostra\n")
    print("3 - Excluir Amostra\n")
    print("4 - Classificar Amostra\n")
    print("5 - Sair")
    print("--------------------\n")


def inserirAmostra(dicAmostra, lista):
    print("--------------------")
    print("Inserir amostra")
    print("--------------------")


    pif = int(input("Particulas inalaveis finas: "))
    pi = int(input("Particulas inalaveis: "))
    de = int(input("Dioxido de enxofre: "))
    dn = int(input("Dioxido de nitrogenio: "))
    mc = int(input("Monoxido de carbono: "))
    o = int(input("Ozonio: "))

    return 0


def alterarAmostra():
    return 0


def excluirAmostra():
    print("Excluir Amostra")

    return 0


def classificarAmostra():
    print("Classificar Amostra")

    return 0


def main():
    
    menu()
    opcao = int(input(""))

    while (True):
        if opcao == 1:
            inserirAmostra()

        elif opcao == 2:
            alterarAmostra()

        elif opcao == 3:
            excluirAmostra()

        elif opcao == 4:
            classificarAmostra()

        elif opcao == 5:
            print("Saindo...")
            break

        else:
            print("Opcao invalida")

    time.sleep(5)
    menu()
    opcao = int(input(""))


main()