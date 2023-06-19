x = int(input("Valor de X: "))
y = int(input("Valor de Y: "))

if(x < y):
    z = int(input("Valor de Z: "))

    if(x < z < y):
        print("Z está no intervalo")

    elif(z > y):
        print("Z esta acima do limite")
    elif(z < x):
        print("Z está abaixop do limite")
    elif(z == y):
        print("Z está no limite superior")
    elif(z == x):
        print("Z está no limite inferior")
    else:
        print("Erro")
    
else:
    print("X > Y o intervalo não está correto")
