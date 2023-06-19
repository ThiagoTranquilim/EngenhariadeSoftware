listap = []
listai = []

while True:
    a = int(input("Número: "))

    if a % 2 == 0:
        listap.append(a)
    else:
        listai.append(a)

    if a < 0:
        break

print(listap)
print(listai)
