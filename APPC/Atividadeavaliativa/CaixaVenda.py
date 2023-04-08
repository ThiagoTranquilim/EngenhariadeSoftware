senha = 123
ten = 0
i = 0
a = b = None
fc = 'N'
s = 0
v = 0
n200 = n100 = n50 = n10 = n5 = m1 = m5 = 0
cliente = vTotal = 0

print(' ' * 10, 'Bem-vindo!')

while ten < 3:  # ten é a variável que limita 3 tentativas do usuário
    sen = int(input('Digite a sua senha para abrir o caixa: '))

    if sen != senha:
        if ten == 0:
            print('SENHA INCORRETA')
            print('Você tem direito a mais DUAS tentativas...\n')
            ten += 1

        elif ten == 1:
            print('SENHA INCORRETA')
            print('Você tem direito a mais UMA tentativa...\n')
            ten += 1

        elif ten == 2:
            print('Senha INCORRETA...')
            print('Sistema tem que ser Reinicializado!!!!!')
            ten += 1
            break

    else:
        ten = 3
        print('Senha Correta')
        print('Caixa Aberto!\n\n')
        troco1 = 1280
        nota200 = 2
        nota100 = 4
        nota50 = 6
        nota10 = 10
        nota5 = 10
        moeda1 = 20
        moeda5 = 20
        print('=' * 30)
        print('INSERÇÃO DOS ITENS VENDIDOS')
        print('=' * 30)

        while b != 'S':
            # i é o contador de vezes que se repete para cada produto
            # a é o valor do produto
            # s é a soma total dos produtos
            i += 1
            a = float(input(f'Digite o valor do item {i}: R$'))

            if a != 0 and a != -1:
                s += a
                a1 = a  # a1 é uma variavel que é dada o valor da ultima soma
                # de S à a, é usada em caso de subtração, quando a = -1

            if a == -1:
                s = s - a1
                i -= 2

            if a == 0:
                print('=' * 30)
                b = input('Deseja Realmente Finalizar?? (S= Sim e N= Não) ')
                print('\n')

                if b == 'N':
                    i -= 1   # Esses i -= durante o código é usado para sempre
                # voltar a contagem dos produtos caso o usuário digite -1 ou 0

                if b == 'S':
                    b = 'N'
                    i -= 1
                    print(f'Venda Finalizada {i} itens\n')

                    print('VENDA FINALIZADA!')
                    i = 0  # i volta a ser 1 para que caso futuramente tenha
                    # outra compra reinicie a contagem de produtos

                    print(f'Valor Total: R${s:.2f}')
                    q = float(input('Valor Pago: R$'))
                    troco = q - s
                    vTotal += s  # vTotal é o valor total de todas as compras
                    if troco == 0:
                        print('NÃO HÁ TROCO')

                    else:
                        print(f'Troco: R${troco:.2f}')
                        troco1 = troco1 - troco  # troco1 é o valor total de
                        # troco no caixa

                        # Utiliza-se N200, N100, N50, N5, M1, M5 para saber
                        # quantas notas foram usadas durante aquela repeticao

                        while troco >= 200 and nota200 > 0:
                            nota200 -= 1
                            troco -= 200
                            n200 += 1

                        while troco >= 100 and nota100 > 0:
                            nota100 -= 1
                            troco -= 100
                            n100 += 1

                        while troco >= 50 and nota50 > 0:
                            nota50 -= 1
                            troco -= 50
                            n50 += 1

                        while troco >= 10 and nota10 > 0:
                            nota10 -= 1
                            troco -= 10
                            n10 += 1

                        while troco >= 5 and nota50 > 0:
                            nota5 -= 1
                            troco -= 5
                            n5 += 1

                        while troco >= 1 and moeda1 > 0:
                            moeda1 -= 1
                            troco -= 1
                            m1 += 1

                        while troco >= 0.5 and moeda5 > 0:
                            moeda5 -= 1
                            troco -= 0.5
                            m5 += 1

                    if troco == 0:
                        if n200 > 0:
                            print(f'{n200} CÉDULAS DE R$200')
                        if n100 > 0:
                            print(f'{n100} CÉDULAS DE R$100')
                        if n50 > 0:
                            print(f'{n50} CÉDULAS DE R$50')
                        if n10 > 0:
                            print(f'{n10} CÉDULAS DE R$10')
                        if n5 > 0:
                            print(f'{n5} CÉDULAS DE R$5')
                        if m1 > 0:
                            print(f'{m1} MOEDAS DE R$1')
                        if m5 > 0:
                            print(f'{m5} MOEDAS DE R$0.5')

                    n200 = n100 = n50 = n10 = n5 = m1 = m5 = 0
                    fc = input('Fechar o Caixa(S = Sim e N=Não)')
                    print('\n')
                    # cliente é utilizado para mostrar quantas vezes foi
                    # repetido o processo de inserção de itens
                    cliente += 1

                    if fc == 'S':
                        print('Fechamento do Caixa!\n')
                        print(f'Número de Clientes Atendidos: {cliente}')
                        print(f'Valor Total das Vendas: R${vTotal:.2f}')
                        print(f'Valor Existente no Caixa: R${troco1:.2f}\n')

                        if nota200 > 0:
                            print(f'{nota200} Notas de R$200')
                        if nota100 > 0:
                            print(f'{nota100} Notas de R$100')
                        if nota50 > 0:
                            print(f'{nota50} Notas de R$50')
                        if nota10 > 0:
                            print(f'{nota10} Notas de R$10')
                        if nota5 > 0:
                            print(f'{nota5} Notas de R$5')
                        if moeda1 > 0:
                            print(f'{moeda1} Moedas de R$1')
                        if moeda5 > 0:
                            print(f'{moeda5} Moedas de R$0.5')
                        b = 'S'
                        print('Até Breve...........')

                    else:
                        s = 0
                        print('=' * 30)
                        print('INSERÇÃO DOS ITENS VENDIDOS')
                        print('=' * 30)
