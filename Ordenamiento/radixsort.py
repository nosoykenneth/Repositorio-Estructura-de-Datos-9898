def getMax(arreglo):
    maximo = arreglo[0]
    for i in range(1, len(arreglo)):
        if arreglo[i] > maximo:
            maximo = arreglo[i]
    return maximo

def countSort(arreglo, exp):
    conteo = [0] * 10
    resultado = [0] * len(arreglo)

    for i in range(len(arreglo)):
        conteo[(arreglo[i] // exp) % 10] += 1

    for i in range(1, 10):
        conteo[i] += conteo[i - 1]

    i = len(arreglo) - 1
    while i >= 0:
        resultado[conteo[(arreglo[i] // exp) % 10] - 1] = arreglo[i]
        conteo[(arreglo[i] // exp) % 10] -= 1
        i -= 1

    for i in range(len(arreglo)):
        arreglo[i] = resultado[i]

def radixSort(arreglo):
    maximo = getMax(arreglo)

    exp = 1
    while maximo // exp > 0:
        countSort(arreglo, exp)
        exp *= 10

arreglo = [170, 45, 75, 90, 802, 24, 2, 66]
radixSort(arreglo)
print("Arreglo ordenado:", arreglo)
