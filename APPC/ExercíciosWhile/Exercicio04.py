
# Fat() retorna o valor fatorial para a divisao do termo
def fat(el):
    el = el + 1
    fat = 1
    i = 2
    while i <= el:
        fat = fat * i
        i = i + 1
    return fat

x = int(input("Valor de X: "))

# S é = x para quando continuar a soma dos proximos 19 termos n precisar elevar e dividir x por 1, só facilita no while
s = x
el = 2
# uso do R em booleano para definir qual termo é ou não positivo
r = True
while el <= 39:
    # 39 porque devem ser mostrados os 20 primeiros termos somados a S
    p = x ** el / fat(el)

    if r:
        # Termo negativo
        r = False
        print(f"P = -{x}^{el}/{el + 1}!")
        s = s - p
    else:
        r = True
        print(f"P = {x}^{el}/{el + 1}!")
        s = s + p
    el = el + 2
print(f"Valor: {s}")
