x = int(input(''))
y = int(input(''))
z = int(input(''))

sx = y + z
sy = x + z
sz = x + y

if(sx > x and sy > y and sz > z):
    if(x == y == z):
        print('Triangulo equilatero')
    elif(x == y and x != z or y == z and y != x or z == x and z != y):
        print('Triangulo isosceles')
    elif(x != y != z):
        print('Triangulo escaleno')
else:
    print('Comprimento errado')
