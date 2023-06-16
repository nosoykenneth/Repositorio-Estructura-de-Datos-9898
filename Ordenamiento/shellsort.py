def shellSort(arreglo):
    longitud = len(arreglo)
    gap = longitud // 2
    while gap > 0:
        for i in range(gap, longitud):
            temp = arreglo[i]
            j = i
            while j >= gap and arreglo[j - gap] > temp:
                arreglo[j] = arreglo[j - gap]
                j -= gap
            arreglo[j] = temp
        gap //= 2

arreglo = [21, 40, 4, 9, 10, 35]
shellSort(arreglo)
print("Arreglo ordenado:", arreglo)
