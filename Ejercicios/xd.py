def shellsort(arr):
    n = len(arr)
    gap = n // 2

    while gap > 0:
        for i in range(gap, n):
            temp = arr[i]
            j = i

            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j -= gap

            arr[j] = temp

        gap //= 2

    return arr

# Lista inicial
lista = [9, 6, 10, 7, 8, 12, 4, 14]

# Llamada a la función shellsort para ordenar la lista
lista_ordenada = shellsort(lista)

# Imprimir lista ordenada
print("Lista ordenada:", lista_ordenada)