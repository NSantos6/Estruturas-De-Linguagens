def fmap(f, array):
    for i in range(0, len(array)):
        array[i] = f(array[i]) #A função definida será executada em cada elemento do array

def divideMeio(n):
    return n / 2

lista = [21, 13, 15, 25, 10, 12]

fmap(divideMeio, lista)
print(lista)
