def intercambiar(arreglo, a, b):
    arreglo[a], arreglo[b] = arreglo[b], arreglo[a]

def particionar(arreglo, izquierda, derecha):
    pivote = arreglo[izquierda]
    i = izquierda + 1
    j = derecha

    while True:
        while i <= j and arreglo[i] <= pivote:
            i += 1
        while i <= j and arreglo[j] >= pivote:
            j -= 1
        if i < j:
            intercambiar(arreglo, i, j)
        else:
            break

    intercambiar(arreglo, izquierda, j)
    return j

def quicksort(arreglo, izquierda, derecha):
    if izquierda < derecha:
        indicePivote = particionar(arreglo, izquierda, derecha)
        quicksort(arreglo, izquierda, indicePivote - 1)
        quicksort(arreglo, indicePivote + 1, derecha)

arreglo = [21, 40, 4, 9, 10, 35]
quicksort(arreglo, 0, len(arreglo) - 1)

print("Arreglo ordenado:", arreglo)
