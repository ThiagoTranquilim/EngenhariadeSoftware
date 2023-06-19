i = 1
an = 0
aux = i + an

while True:
    aux = i + an
    i = an
    an = aux
    print(aux)

    if i > 200:
        break
