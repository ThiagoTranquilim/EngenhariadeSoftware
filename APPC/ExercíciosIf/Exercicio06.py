n1 = float(input("Valor de n1: "))
n2 = float(input("Valor de n2: "))
p1 = float(input("Valor de p1: "))
p2 = float(input("Valor de p2: "))

v = ((n1 * p1) + (n2 * p2))/2

if(v == 10):
    print("Aprovado com Distinção")
elif (v >= 7):
    print("Aprovado")
elif(v < 7):
    print("Reprovado")
