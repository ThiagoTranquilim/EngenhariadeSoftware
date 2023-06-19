dicLivros = {}

while True:
    try:
        N = int(input("Digite a quantidade de livros cadastrados: "))
        break
    except ValueError:
        print("Digite um valor inteiro")

for i in range(N):
    while True:
        try:
            codLivro = int(input("Digite o código do livro: "))
            break
        except ValueError:
            print("Digite um valor inteiro")

    if codLivro in dicLivros.keys():
        print("Livro já existe")
    else:
        listaAutor = []
        while True:
            try:
                tituloLivro = input("Digite o título do livro: ")
                break
            except ValueError:
                print("Digite uma string")

        while True:
            try:
                numAutores = int(input("Digite a quantidade de autores: "))
                break
            except ValueError:
                print("Digite um valor inteiro")

        for a in range(numAutores):
            while True:
                try:
                    nomeAutor = input(f"Digite o nome do autor {a}: ")
                    break
                except ValueError:
                    print("Digite uma string")
            listaAutor.append(nomeAutor)
        while True:
            try:
                precoLivro = float(input("Digite o preco do livro: "))
                break
            except ValueError:
                print("Digite um valor decimal ou inteiro")
        dicLivros[codLivro] = [tituloLivro, numAutores, listaAutor, precoLivro]

while True:
    try:
        tituloBusca = input("Digite o titulo a ser buscado: ")
        break
    except ValueError:
        print("Digite uma string")
for codLivro, dadosLivro in dicLivros.items():
    if tituloBusca == dadosLivro[0]:
        print(f"\n{codLivro}    {dadosLivro[0]:<15}     {dadosLivro[3]:.2f}  ")

while True:
    try:
        codBusca = int(input("Digite o codigo a ser buscado: "))
        break
    except ValueError:
        print("Digite um valor inteiro")
for codLivro, dadosLivro in dicLivros.items():
    if codBusca == codLivro:
        print(f"\n{codLivro}    {dadosLivro[0]:<15}     {dadosLivro[3]:.2f}  ")

for codLivro, dadosLivro in dicLivros.items():
    if dadosLivro[3] > 50.00:
        print(f"\n{codLivro}    {dadosLivro[0]:<15}     {dadosLivro[3]:.2f}  ")
